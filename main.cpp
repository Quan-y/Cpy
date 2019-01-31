#include <iostream>
#include <iomanip>
int main()
{
    // std::endl means start in a new line
    // std::setw means leave 5 spaces for the result
    std::cout << "Hello World " << std::setw(5) << 2016 << " is today's year" << std::endl;
    std::cout << "Hello World " << std::setw(5) << 3 << " is today's month" << std::endl;
    std::cout << "Hello World " << std::setw(5) << 16 << " is today's day" << std::endl;
    return 0;
}


//#include <iostream>
//int main()
//{
//    std::cout << "Hello World";
//}
