//
//  main.cpp
//  generic
//
//  Created by Eric Yuan on 2/6/19.
//  Copyright © 2019 Eric Yuan. All rights reserved.
//
#include <iostream>
//void arrPrint(int arr[], int len);
//void arrPrint(double arr[], int len);

// generic function
template <typename TYPE>
void arrPrint(TYPE arr[], int len){
    std::cout << "[";
    for (int i = 0; i<len-1; ++i){
        std::cout <<arr[i] << ", ";
    }
    if (len != 0){
        std::cout << arr[len - 1];
    }
    std::cout << "]" << std::endl;
}

int main() {
    int arr00[10] = {1, 2, 3, -1, 5, 9, 11, 0, 1, 3};
    double arr01[10] = {1, 2, 3.5555, -1.1111, 5, 9, 11, 0, 1, 3};
    char arr02[4] = {'a', 'p', 'c', 'd'};
//    const int len = sizeof arr01 / sizeof arr01[0];
    std::cout << sizeof arr01 << " " << sizeof arr01[0] << std::endl;
    arrPrint(arr00, 10);
    arrPrint(arr01, 10);
    arrPrint(arr02, 4);
}

//void arrPrint(int arr[], int len){
//    std::cout << "[";
//    for (int i = 0; i < len - 1; ++i){
//        std::cout << arr[i] << ", ";
//    }
//    if (len != 0){
//        std::cout << arr[len - 1];
//    }
//    std::cout << "] INT" << std::endl;
//}
//
//void arrPrint(double arr[], int len){
//    std::cout << "[";
//    for (int i = 0; i < len - 1; ++i){
//        std::cout << arr[i] << ", ";
//    }
//    if (len != 0){
//        std::cout << arr[len - 1];
//    }
//    std::cout << "] DOUBLE" << std::endl;
//}
