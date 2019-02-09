//
//  main.cpp
//  STL
//
//  Created by Eric Yuan on 2/7/19.
//  Copyright © 2019 Eric Yuan. All rights reserved.
//
#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <map>
#include <functional>
//std::vector
//std::string
//std::map
//std::function
//std::deque

double Calculate(std::function<double(double)> f, double x);
double TestFun1(double x);
double TestFun2(double x);

int main() {
    ///////////////////// vector /////////////////////
//    std::vector<int> vec1 (10);
//    std::vector<double> vec2 (5);
//    // empty vector with zero elements
//    std::vector<int> vec3;
//    // three elements and all elements = 7
//    std::vector<int> vec4 (3, 7);
//    // unsigned int vec1_size = vec1.size();
//
//    for(int i = 0; i<vec4.size(); ++i){
//        std::cout << vec4[i] << std::endl;
//    }
//    int c4 = vec4.at(0); // vec4[0]
//    bool emp1 = vec1.empty(); // 0 not empty
//    bool emp3 = vec3.empty(); // 1 empty
//
//    std::cout << vec3.size() << std::endl;
//    // add 100 to vec3 at the end
//    vec3.push_back(100);
//    std::cout << vec3.size() << std::endl;
//
//    bool emp3update = vec3.empty(); // 0 not empty
//    int c3 = vec3.at(0); // vec3[0]
//    std::cout << c4 << emp1 << emp3 << emp3update << c3 << std::endl;
//
//    // initialization
//    std::vector<int> vec5 {5,4,3,2,1};
//    for (int i : vec5){
//        std::cout << i << ' ';
//    }
//    // drop the last element
//    vec5.pop_back();
//    std::cout << std::endl;
//    for (int i : vec5){
//        std::cout << i << ' ';
//    }
    
    
    ///////////////////// deque /////////////////////
//    // initialize with 0
//    std::deque<int> dq1(10);
//    std::deque<double> dq2(5);
//    std::deque<int> dq3;
//    std::deque<int> dq4(3, 7);
//    for(int i = 0; i<dq4.size(); ++i){
//        std::cout << dq4[i] << std::endl;
//    }
//    int  e1 = dq1.at(0);
//    bool emp2 = dq2.empty();
//    bool emp3 = dq3.empty();
//    std::cout << std::endl << dq3.size() << std::endl;
//    dq3.push_back(100);
//    std::cout << std::endl << dq3.size() << " " << dq3.at(0) << std::endl;
//    // initialization
//    std::deque<int>dq5{5, 4, 3, 2, 1};
//    for(int i : dq5){
//        std::cout << i << ' ';
//    }
//    dq5.pop_back();
//    std::cout << std::endl;
//    for(int i : dq5){
//        std::cout << i << ' ';
//    }
//    // push 100 in the front
//    dq5.push_front(100);
//    std::cout << std::endl;
//    for(int i : dq5){
//        std::cout << i << ' ';
//    }

    ///////////////////// string /////////////////////
//    std::string s1 = "How is it going";
//    std::cout << s1 << std::endl;
//    // empty string
//    std::string s2;
//    std::string s3 = "Hey";
//
//    unsigned int s1_size = s1.size();
//    std::cout << s1_size << std::endl;
//
//    bool cmp1 = s1.empty();
//    std::cout << cmp1 << std::endl;
//
//    char c1 = s1[0];
//    char c2 = s1.at(0);
//    std::cout << c1 << c2 << std::endl;
//
//    // compare string
//    if (s1 == s1){}
//    if (s3 != s1){}
//    if (s3 == "Hey"){std::cout << s3 << std::endl;}
//    if (s1 > s3){}
//
//    s1 += " Hey " + s3;
//    std::cout << s1 << std::endl;
//
//    // cin (only get one word without space), getline(get entire one line)
//    std::string s5;
//    std::getline(std::cin, s5);
//    std::cout << s5 << std::endl;
    
    ///////////////////// map /////////////////////
//    std::map<int, std::string> numbers;
//    numbers[0] = "Zero";
//    numbers[1] = "One";
//    numbers[2] = "Two";
//
//    std::cout << numbers.at(0) << std::endl;
//    std::cout << numbers.size() << std::endl;
//    bool emp = numbers.empty();
//    std::cout << emp << std::endl;
//    // find, end
//    auto it = numbers.find(2);
//    if (it==numbers.end()){
//        std::cout << "Not find" << std::endl;
//    }else{
//        std::cout << "Find" << std::endl;
//    }
//    // initialization
//    std::map<int, std::string> Days{
//        {1, "Monday"},
//        {2, "Tuesday"},
//        {3, "Wednesday"}
//    };
//    for (int i = 1; i <= 3; ++i){
//        std::cout << Days[i] << std::endl;
//    }
    
    ///////////////////// functional /////////////////////
    double a = Calculate(TestFun1, 5);
    double b = Calculate(TestFun1, 10);
    
    // lambda function, input: int a, int b output: int
    std::function<int(int, int)> f = [] (int a, int b) -> int {return(a*b);};
    int res = f(10, 20);
    
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "res: " << res << std::endl;
    
    return 0;
}
double Calculate(std::function<double(double)> f, double x){
    double y = f(x)*f(x)*f(x);
    return y;
}
double TestFun1(double x){
    return x*x;
}
double TestFun2(double x){
    return x*x - 2*x + 1;
}




