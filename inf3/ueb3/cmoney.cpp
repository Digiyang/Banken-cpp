#include <iostream>
#include <iomanip>
#include "cmoney.h"

using namespace std;

CMoney::CMoney()
{
    amount = 0.0;
    currency = "EUR";
}

CMoney::CMoney(double a, std::string c )
{
    amount = a;
    currency = c;
}

void CMoney::print() const 
{
    std::cout << fixed << setprecision(2); //float
    std::cout << amount << ' ' << currency;
}