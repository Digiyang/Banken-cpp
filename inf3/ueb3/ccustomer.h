#ifndef CCUSTOMER_H 
    #define CCUSTOMER_H CCUSTOMER_H

#include <string>   
#include <vector>
#include "cdate.h"
#include "caddress.h"
#include "caccount.h"

using namespace std;

class CAccount;

class CCustomer
{
    private:
        long id;
        std::string name;
        CDate birthday;
        CAddress address;
        vector<CAccount*> accountList;
// Vectors are sequence containers representing arrays that can change in size.
    public:
        CCustomer(long i, std::string n, CDate b, CAddress a);

        void addAccount(CAccount *add_account);
        void print() const;
        void customer_name() const;
};
#endif