#include <ctime>
#include <iostream>
#include "cdate.h"

using namespace std;
static int valid_date(const int day, const int month, const int year);

//konstruktoren
CDate::CDate()
{
    time_t rawtime = time(NULL);
    struct tm * time = localtime(&rawtime);

    day = time -> tm_mday;
    month = time -> tm_mon + 1;
    year = time -> tm_year + 1900;
}

CDate::CDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;

    if (!valid_date(day, month, year))
    {
        std::cerr << "it's not a valid date!" << std::endl;
        throw "it's not a valid date";
    }

}

// print method
void CDate::print() const
{
    std::cout.fill('0');
    std::cout.width(2);
    std::cout<<day<<'.';
    std::cout.width(2);
    std::cout<<month<<'.'<<year;
    std::cout.fill(' ');
}

//leap year method
//A year that is divisible by 4 is known as a leap year. 
//However, years divisible by 100 are not leap years while 
//those divisible by 400 are.

static int leap_year(const int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    std::cout<<year<<" is a leap year!";
    else
    std::cout<<year<<" is not a leap year!";
    return 0;
}

//check if date is valid
static int valid_date(const int day, const int month, const int year)
{
    int days_in_month;

    switch(month)
    {
        case 1: ;
        case 3: ;
        case 5: ;
        case 7: ;
        case 8: ;
        case 10: ;
        case 12: days_in_month = 31; break;
        case 4: ;
        case 6: ;
        case 9: ;
        case 11: days_in_month = 30; break;
        case 2: days_in_month = 28; break;
        default: return 0;
    }
    if ((days_in_month == 28) && leap_year(year))
        days_in_month++;
    
    if (day > days_in_month || day <= 0 || year < 1910 || year > 2110)
        return 0;
    
    return 1;
}