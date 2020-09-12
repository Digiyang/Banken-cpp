#ifndef CADDRESS_H
    #define CADDRESS_H CADDRESS_H

using namespace std;

class CAddress
{
    private:
        std::string street;
        std::string postcode;
        std::string town;

    public:
        
        CAddress(std::string s, std::string p, std::string t);
        void print() const;
};

#endif