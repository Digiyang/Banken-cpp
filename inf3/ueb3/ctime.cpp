#include <ctime>
#include <iostream>
#include "ctime.h"

static int valid_time(const int hour, const int minute, const int second);

//Konstruktoren
CTime::CTime()
{
    time_t rawtime = time(NULL);
    struct tm * time = localtime(&rawtime);

    hour = time->tm_hour;
    minute = time->tm_min;
    second = time->tm_sec;
}

CTime::CTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;

    if (!valid_time(hour, minute, second))
    {
        std::cerr << "invalid time!"<< std::endl;
        throw "invalid time!";
    }
}

//print method
void CTime::print() const
{
    std::cout.fill('0');
    std::cout.width(2);
    std::cout<<hour<<':';
    std::cout.fill('0');
    std::cout.width(2);
    std::cout<<minute;

    if (second)
    {
        std::cout<<':';
        std::cout.width(2);
        std::cout<<second;
    }

    std::cout.fill(' ');
}

//check valid time
static int valid_time(const int hour, const int minute, const int second)
{
    if ( hour > 23 || hour < 0 
    || minute > 59 || minute < 0 
    || second > 59 || second < 0)
    return 0;

return 1;
}