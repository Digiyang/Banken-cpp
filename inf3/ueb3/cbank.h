#ifndef CBANK_H
    #define CBANK_H CBANK_H

#include "caccount.h"
#include <vector>

using namespace std;

class CAccount;

class CBank
{
    private:
        std::string name;
        std::string bic;
        vector<CAccount*> accountList;

    public:
        CBank(std::string name, std::string bic);
        
        void print() const;
        void addAccount(CAccount *add_account);
        
        std::string getbic() const {return bic;}

};

#endif