#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <cmath>
// min, max
#include <algorithm>
#include <stdexcept>
// constant define
#define PI 3.14159
void myPrint(int n);
int getLastDigit(const int n);
double mySqrt(double x);
void something(int n);
void testGenericExp(int n);

struct date {
    int day;
    int month;
    int year;
};

struct book {
    int ID;
    std::string name;
    std::string author;
    date published;
    static int count;
};
// we need assign memory for static int count
int book::count;


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
    
//    // PART 2
//    int n1, n2, n3, n4, n5;
//    std::cout << "Enter five integers and seperate with space: ";
//    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;
//
//    int sum = n1 + n2 + n3 + n4 + n5;
//    // sum/5.0f also works
//    float average = sum*1.0/5;
//    std::cout << "Average of five integers is " << average << std::endl;
    
//    // PART 3
//    int x = 5;
//    x = 10;
//    // constant variable cannot be changed, has to have a value (const int w, will be an error)
//    const int y = 3;
//    // const int and int const are the same
//    int const z = 100;
//    std::cout << "PI " << PI << std::endl;
    
//    // PART 4
//    std::cout << "Enter circle radius: ";
//    float radius;
//    std::cin >> radius;
//    float area = PI*radius*radius;
//    std::cout << "Circle's radius: " << area << std::endl;
    
    // PART 5
    // auto help to recognize the type of data
//    auto x = 10.5;
//    auto y = 10;
//    int var1 = 10;         // initial value: 10
//    int b(3);              // initial value: 3
//    int c{2};              // initial value: 2
    
    // PART 6
//    int x = 6;
//    // everything not 0 is true
//    if (x > 6){
//        std::cout << "X is bigger than 6" << std::endl;
//    }else{
//        std::cout << "X is less than 6" << std::endl;
//    }
//    // multiple conditions
//    if (x > 6)
//        std::cout << "X is bigger than 6" << std::endl;
//    else if (x < 6)
//        std::cout << "X is less than 6" << std::endl;
//    else
//        std::cout << "X is 6" << std::endl;
    
    // PART 7
    // boolean operator: ||, &&, !
//    bool A = true,
//         B = false,
//         C = true,
//         D = false;
//    bool and1 = A || B;
//    bool and2 = B || (A && C);
//    bool and3 = !D;
//    std::cout << and1 << and2 << and3 << std::endl;
    // relation operator: >, <, >=, <=, !=, ==
    // Comma operator: right judge
//    int x = 2, y = 3;
//    if (y>1, x>4){
//        std::cout << "Something..." << std::endl;
//    }
    
    // PART 8
//    int n;
//    std::cout << "Enter n: " << std::endl;
//    std::cin >> n;
//    int sum = 0;
//    // start time
//    auto start = std::chrono::high_resolution_clock::now();
//    for (int i = 1; i <= n; ++i){
//        sum += i;
//    }
//    std::cout << "sum is: " << sum << std::endl;
//    // finish time
//    auto finish = std::chrono::high_resolution_clock::now();
//    // duration
//    std::chrono::duration<double> elapsed = finish - start;
//    // elapsed time
//    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
    
    // PART 9
//    double n;
//    double target = 1.5;
//    std::cout << "Enter n: " << std::endl;
//    std::cin >> n;
//    while (n >= target){
//        n = n*1.0/2;
//        std::cout << n << std::endl;
//    }
    
    // PART 10
//    double n;
//    double target = 1.5;
//    std::cout << "Enter n: " << std::endl;
//    std::cin >> n;
//    do{
//        // sqrt belong to <cmath> library
//        n = sqrt(n);
//        std::cout << n << std::endl;
//    }while(n >= target);
    
    // PART 11
//    int arr1[] = {5, 4, 1, 2, 3, -2};
//    double arr2[] = {1.1, 2.2, 6.1, 3.5};
//    for (int i : arr1){
//        std::cout << i << std::endl;
//    }
//    for (double i : arr2){
//        std::cout << i << std::endl;
//    }
//    for (int i = 0; i <= 5; ++i){
//        std::cout << arr1[i] << std::endl;
//    }
    
    // PART 12
//    int i = 1;
//    AGAIN:
//    std::cout << i << std::endl;
//    ++i;
//    if (i <= 20)
//        goto AGAIN;
    
    // PART 13
//    int sum = 0;
//    for (int i = 1;;++i){
//        sum += i;
//        if (sum  > 21){
//            std::cout << sum << std::endl;
//            break;
//        }
//    }
//    int N, M;
//    int sum = 0;
//    std::cout << "Input N, M: " << std::endl;
//    std::cin >> N >> M;
//    for (int i=0; i <= N; ++i){
//        for (int j=0; j <= M; ++j){
//            sum += i+j;
//        }
//    }
//    std::cout << sum << std::endl;
    
    // PART 14
//    // C++ not do boundary checking
//    int arr1[10];
//    int arr2[5] = {1, 2, 7, 5};
//    // all elements are 0
//    int arr3[100] = {0};
//    int arr4[5];
//    // initialization using for loop
//    for (int i = 0; i < 100; ++i){
//        arr3[i] = 5;
//    }
//    for (int i = 0; i < 5; ++i){
//        std::cin >> arr4[i];
//    }
//    arr1[0] = 5;
//    arr1[1] = 4;
//    std::cout << arr2[3] << std::endl;
//    std::cout << arr3[3] << std::endl;
    
    // PART 15: find min and max element
    // method 1: algorithm
//    int arrTest[4];
//    for (int i = 0; i <= 4; ++i){
//        std::cin >> arrTest[i];
//    }
//    int *min = std::min_element(std::begin(arrTest), std::end(arrTest));
//    int *max = std::max_element(std::begin(arrTest), std::end(arrTest));
//    std::cout << "The max number in array is " << *max << std::endl;
//    std::cout << "The min number in array is " << *min << std::endl;
    
    // method 2: normal method
//    int arrTest[4];
//    std::cin >> arrTest[0];
//    int max = arrTest[0];
//    int min =arrTest[0];
//    for (int i = 1; i <= 4; ++i){
//        std::cin >> arrTest[i];
//        if (arrTest[i] > max){
//            max = arrTest[i];
//        }
//        if (arrTest[i] < min){
//            min = arrTest[i];
//        }
//    }
//    std::cout << "The max number in array is " << max << std::endl;
//    std::cout << "The min number in array is " << min << std::endl;
    
    // PART 16: string array
//    char str1[4] = {'A', 'B', 'C', 'D'};
//    std::cout << str1;
    
    // PART 17: function 1 without return
//    while (1){
//        std::cout << "Enter number (0 for exit): ";
//        int n;
//        std::cin >> n;
//        if (n == 0){
//            break;
//        }
//        myPrint(n);
//    }
    
    // PART 18: function with return
//    std::cout << "Please input an integer: " << std::endl;
//    int number;
//    std::cin >> number;
//    int res = getLastDigit(number);
//    std::cout << "Result of mode " << number << " is " << res << std::endl;
    
    // PART 19: lambda function
//    auto lambda1 = [] (int x){
//        return x*x*x;
//    };
//    auto lambda2 = [] (int x, int y){
//        return x*y;
//    };
//    int result2 = lambda2(10.1, 5.5);
//    int num = 10;
//    int result1 = lambda1(num);
//    std::cout << "Result 1 is " << result1 << std::endl;
//    std::cout << "Result 2 is " << result2 << std::endl;
    
    // PART 20: exception
    // throw "text";
    // throw ();
    // throw std::domain_error("text");
    // throw std::exception("text");
    
    // example 1:
//    int test;
//    std::cout << "Please enter a number: " << std::endl;
//    std::cin >> test;
//    try{
//        double squareRoot = mySqrt(test);
//        std::cout << "sqrt is " << squareRoot << std::endl;
//    }catch (const char*text){
//        std::cout << "ERROR: " << text << std::endl;
//        return 1;
//    }
    
    // example 2:
//    int num;
//    std::cout << "please enter a number: " << std::endl;
//    std::cin >> num;
//    try{
//        something(num);
//    }catch(char c){
//        std::cout << "Caught: CHAR " << std::endl;
//    }catch(int i){
//        std::cout << "Caught: INT " << std::endl;
//    }catch(const char *txt){
//        std::cout << "Caught: Text " << txt << std::endl;
//    }catch(std::domain_error error1){
//        // error1.what() is the content in std::domain_error("")
//        std::cout << "Caught domain_error with text: " << error1.what() << std::endl;
//    }
    
    // PART 21: generic catch block
//    int num;
//    std::cout << "please enter a number: " << std::endl;
//    std::cin >> num;
//    try{
//        testGenericExp(num);
//        // catch(...) can catch anything
//    }catch(...){
//        std::cout << "ERROR" << std::endl;
//    }
    
    // PART 22: struct
    // example 1:
//    date dt;
//    std::cout << "Enter month: ";
//    std::cin >> dt.month;
//
//    std::cout << "Enter day: ";
//    std::cin >> dt.day;
//
//    std::cout << "Enter year: ";
//    std::cin >> dt.year;
//
//    std::cout << "Enter date: ";
//    std::cout << dt.month << "/" << dt.day << "/" << dt.year << std::endl;
    
    // example 2:
//    book b1, b2;
//    b1.ID = 0;
//    b1.name = "name1";
//    b1.author = "guy";
//    b1.count = 1;
//    // shared count b2.count = b1.count since static
//    std::cout << b2.count << std::endl;

//    // easy way to initialize
//    date dt_for_book1 ={3,21,1997};
//    std::cout << dt_for_book1.month << "/" << dt_for_book1.day << "/" << dt_for_book1.year << std::endl;
//
//    // initialize 100 books
//    book books[100];
    
    return 0;
}

void myPrint(int n){
    for (int i = 0; i <= n; ++i){
        std::cout << "*";
    }
    std::cout << std::endl;
}

int getLastDigit(const int n){
    int result = n % 10;
    return result;
}

double mySqrt(double x){
    if (x < 0){
        throw "Negative number";
    }
    double sroot = sqrt(x);
    return sroot;
}

void something(int n){
    if(n == 0)
        throw 1;
    else if (n > 0 && n < 100)
        throw "n > 0 && n < 100";
    else if (n == -1)
        throw "c";
    else if (n <= -1)
        // std::logic_error
        // std::domain_error
        // std::invalid_argument
        // std::length_error
        // std::out_of_range
        // std::range_error
        // std::overflow_error
        // std::underflow_error
        throw std::domain_error("std exception");
}

void testGenericExp(int n){
    if (n == 0)
        throw 0;
    else if (n == 1)
        throw 1;
}




