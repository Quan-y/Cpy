//
//  main.cpp
//  OOP
//
//  Created by Eric Yuan on 2/9/19.
//  Copyright © 2019 Eric Yuan. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdexcept>


//class Date{
//    public:
//        int day;
//        int month;
//        int year;
//    void SetDate(int d, int m, int y){
//        this -> day = d;
//        this -> month = m;
//        this -> year = y;
//    }
//    // this method can not be changed
//    void Print() const{
//        std::cout << this -> month << "/"
//                  << this -> day << "/"
//                  << this -> year << std::endl;
//    }
//    int getDay() const{
//        return this -> day;
//    }
//    int getMonth() const{
//        return this -> month;
//    }
//    int getYear() const{
//        return this -> year;
//    }
//};

class Date{
    int day;
    int month;
    int year;
    std::string GetMonthName () const{
        static std::string months[] ={
            "January", "February", "March",
            "April", "May", "June", "July",
            "August", "September", "October",
            "November", "December"
        };
        return months[month - 1];
    }
    
public:
    Date (int d, int m, int y){
        this->SetDate(d, m, y);
    }
    void SetDate (int d, int m, int y){
        SetDay(d);
        SetMonth(m);
        SetYear(y);
    }
    void Print () const{
        std::cout << this->month << "/"
        << this->day << "/"
        << this->year << std::endl;
    }
    void PrintNice () const{
        std::cout << day << " " << GetMonthName()
        << " " << year << std::endl;
    }
    int GetDay() const{
        return this->day;
    }
    int GetMonth() const{
        return this->month;
    }
    int GetYear() const{
        return year;
    }
    void SetDay (int d){
        if (d < 0 || d > 31)
            throw std::logic_error ("Day out of range!");
        this->day = d;
    }
    void SetMonth (int m){
        if (m < 1 || m > 12)
            throw std::logic_error ("Month must be in [1, 12] interval!");
        this->month = m;
    }
    void SetYear (int y){
        if (y < 0)
            throw std::logic_error ("Year must be positive!");
        this->year = y;
    }
};

class DummyClass{
    int dummy_attr1;
    char dummy_attr2;
    public:
        DummyClass() : dummy_attr1(0), dummy_attr2('E'){
            std::cout << "Contructor" << std::endl;
        };
        DummyClass(int param) : dummy_attr1(param), dummy_attr2('P'){
            std::cout << "2nd Contructor " << param << std::endl;
        };
        void Print() const{
            std::cout << "dummy_attr1 = " << dummy_attr1 << std::endl;
            std::cout << "dummy_attr2 = " << dummy_attr2 << std::endl;
        };
};

int main(int argc, const char * argv[]) {
    ////////////////////// Date class //////////////////////
//    Date dt;
//    dt.SetDate(12, 5, 1993);
//    dt.Print();
//    int day = dt.getDay();
//    std::cout << day << std::endl;
//    int m, d, y;
//    Date dt;
//    std::cout << "Enter month, day, year:" << std::endl;
//    std::cin >> m >> d >> y;
//    dt.SetDate(m, d, y);
//    dt.Print();
    
    ////////////////////// Constructors //////////////////////
//    DummyClass dummy1;
//    dummy1.Print();
//
//    DummyClass dummy2(7);
//    dummy2.Print();
    
    Date dt1(1, 1, 2014);
    Date dt2(dt1);
    
    dt1.PrintNice();
    
    
    
    return 0;
}
