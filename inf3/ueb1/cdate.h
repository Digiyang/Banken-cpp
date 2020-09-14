#ifndef CDATE_H
    #define CDATE_H CDATE_H

//CDate class mit 2 Konstruktoren
class CDate
{
    private:
        int day, month, year;

    public:
        CDate(); //konst1
        CDate(int d, int m, int y); //konst2

        void print() const; //print method
};

#endif