#include <string>
#ifndef CMONEY_H
    #define CMONEY_H CMONEY_H

class CMoney
{
    private:

        double amount;
        std::string currency;

    public:
        
        CMoney();
        CMoney(double a, std::string c = "EUR");

        void print() const;
};

#endif