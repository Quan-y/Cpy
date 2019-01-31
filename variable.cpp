#include <iostream>
#include <iomanip>
int main()
{
    // bool char short long float double
    // unsigned int means positive integer
    // short very small numbers
    // unsigned short [0, 65536]
    // signed short [-32268, 32268]
//    int year;
//    year = 2019;
//    int a = 10, b, c = 5, e = a;
//    bool test1 = true;
//    bool test2 = false;
//    double d = 4.33;
//    float f = 0.54;
//    std::cout << "Year is " << year;

    int year = 2016, mon = 3, day = 16;
    std::cout << "Today is: "
              << std::setw (2) << std::setfill('0') << day
              << "."
              << std::setw (2) << mon
              << "."
              << year << ".";
    return 0;

}
