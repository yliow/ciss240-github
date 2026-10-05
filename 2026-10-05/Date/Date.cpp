#include <iostream>
#include "Date.h"

Date::Date(int yyyy, int mm, int dd)
    : yyyy_(yyyy), mm_(mm), dd_(dd)
{
    // yyyy_ = yyyy;
    // mm_ = mm;
    // dd_ = dd;
}

// void Date::init(int yyyy, int mm, int dd)
// {
//     yyyy_ = yyyy;
//     mm_ = mm;
//     dd_ = dd;
// }

void Date::print()
{
    std::cout << yyyy_ << '-'
              << mm_ << '-'
              << dd_ << '\n';
}

void Date::add_y(int i)
{
    yyyy_ += i;
}

void Date::add_m(int i)
{
    mm_ += i;
}

void Date::add_d(int i)
{
    dd_ += i;
}

void Date::add_m_d(int i, int j)
{
    add_m(i);
    add_d(j);
}


int Date::year()
{
    return yyyy_;
}
