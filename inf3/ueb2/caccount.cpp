#include <iostream>

#include "caccount.h"
#include "ccustomer.h"

CAccount::CAccount(std::string ib, CCustomer *c, CMoney ba)
{
    iban = ib;
    customer = c;
    balance = ba;

    customer -> addAccount(this);
}

void CAccount::print() const
{
    std::cout << "Kunde:   "; customer -> customer_name(); std::cout << std::endl;
    std::cout << "IBAN:    "; show_iban(); std::cout << std::endl;
    std::cout << "Balance: "; balance.print();
}

void CAccount::show_iban() const
{
    std::string _iban = iban;
    int s = _iban.size();

    /*  slicing iban in groups of 4
        for each 4 steps counter++
        insert at the 4th position a whitespace
    */
    for (int i = 0; (i+1)*4 < s; i++)
    {
        _iban.insert((i+1)*4 + 1, " ");
    }
}