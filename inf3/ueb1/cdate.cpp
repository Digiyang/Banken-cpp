#include <ctime>
#include <iostream>
#include "cdate.h"

using namespace std;

//konstruktoren

CDate::CDate()
{
    time_t rawtime = time(NULL);
    struct tm * time = localtime(&rawtime);

    day = time -> tm_mday;
    month = time -> tm_mon + 1;
    year = time -> tm_year + 1900;
}
