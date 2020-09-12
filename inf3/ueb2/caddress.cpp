#include <iostream>
#include "caddress.h"
 
using namespace std;

CAddress::CAddress(std::string s, std::string p, std::string t)
{
    street = s;
    postcode = p;
    town = t;
}

void CAddress::print() const 
{
    std::cout << street << std::endl;
    std::cout << postcode << ' ' << town;
}