#include <iostream>

#include "ccustomer.h"

using namespace std;

CCustomer::CCustomer(long i, std::string n, CDate b, CAddress a)
: id{i}, name{n}, birthday{b}, address{a} {}

void CCustomer::addAccount(CAccount *add_account)
{
    accountList.push_back(add_account);
}

void CCustomer::print() const 
{
    customer_name(); std::cout << std::endl;
    address.print(); std::cout << std::endl;
    std::cout << "geboren am:"; birthday.print();
    std::cout << "\nKonten:\n";

    for (auto x: accountList)
    {
        std::cout << "- Konto.: "; x -> show_iban();
    }
}

void CCustomer::customer_name() const
{
    std::cout << name << " (Kd-Nr. " << id << ")";
}