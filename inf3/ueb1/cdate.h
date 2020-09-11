#ifndef cdate_h
    #define cdate_h cdate_h

class CDate
{
    private:
        int day, month, year;

    public:
        CDate(); //konst1
        CDate(int d, int m, int y); //konst2

        void print(); //print method
};

#endif