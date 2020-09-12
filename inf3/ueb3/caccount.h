#ifndef CACCOUNT_H
    #define CACCOUNT_H CACCOUNT_H

#include <iostream>
#include <string>
#include "ccustomer.h"
#include "cmoney.h"

class CCustomer;

using namespace std;

class CAccount
{
    private:

        std::string iban;
        CCustomer *customer;
        CMoney balance;

    public:

        CAccount(std::string ib, CCustomer *c, CMoney ba);
        void print() const;
        void show_iban() const;
};
#endif