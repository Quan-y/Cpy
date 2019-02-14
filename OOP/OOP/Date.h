// if not defined
#ifndef DATE_H
#define DATE_H
#include <iostream>
class Date{
    int day;
    int month;
    int year;
    
public:
    void SetDate (int d, int m, int y);
    void Print () const;
    void PrintNice () const;
    int GetDay() const;
    int GetMonth() const;
    int GetYear() const;
};
#endif


