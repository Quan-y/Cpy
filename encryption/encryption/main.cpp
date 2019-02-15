//
//  main.cpp
//  encryption
//
//  Created by Eric Yuan on 2/15/19.
//  Copyright © 2019 Eric Yuan. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

std::string ROT13(std::string s);

int main() {
    std::string text, s, file_path;
    std::cout << "Enter text (---in newline to end):" << std::endl;
    while(std::getline(std::cin, s)){
        if(s != "---"){
            text += s + '\n';
        }else{
            break;
        }
    }
    std::cout << "Enter name of the file: ";
    std::getline(std::cin, file_path);
    std::ofstream file(file_path);
    if(!file){
        std::cout << "Error! Cannot write to " << file_path << std::endl;
        return 1;
    }
    file << ROT13(text);
    file.close();
    return 0;
}
// difference between "for(char c:s)" and "for(char& c : s)"
// for (char c : s) This creates a copy of each element in s and stores it in c. This means that modifying c does not modify s.
// for (char& c : s) This does NOT create a copy of each element in s but instead directly references and stores it in c as an alias. This means that modifying c does modify s.

std::string ROT13(std::string s){
    for(char &c : s){
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            if(c < 'a' + 13 || c < 'A' + 13){
                c += 13;
            }else{
                c -= 13;
            }
        }
    }
    return s;
};
