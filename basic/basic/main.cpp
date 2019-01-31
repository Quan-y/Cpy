#include <iostream>
int main()
{
//    // PART 1
//    int number;
//    int squared = number*number;
//    std::cout << "Enter integer: ";
//    // input from keyboard and pass into number
//    std::cin >> number;
//    std::cout << "Squared integer is " << squared << std::endl;
//    std::cout << "Squared integer " << number << " is " << squared << std::endl;
    
    // PART 2
    int n1, n2, n3, n4, n5;
    std::cout << "Enter five integers and seperate with space: ";
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;
    
    int sum = n1 + n2 + n3 + n4 + n5;
    // sum/5.0f also works
    float average = sum*1.0/5;
    std::cout << "Average of five integers is " << average << std::endl;
    
    // PART 3
    
    
    
    return 0;
}
