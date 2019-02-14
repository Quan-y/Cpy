//
//  Date.cpp
//  OOP
//
//  Created by Eric Yuan on 2/13/19.
//  Copyright © 2019 Eric Yuan. All rights reserved.
//

#include "Date.h"

void Date::SetDate(int d, int m, int y){
    this -> day = d;
    this -> month = m;
    this -> year = y;
}
void Date::Print() const{
    std::cout << this -> month << "/"
              << this -> day << "/"
              << this -> year << std::endl;
}
int Date::GetDay() const{
    return this -> day;
}
int Date::GetMonth() const{
    return this -> month;
}
int Date::GetYear() const{
    return this -> year;
}


