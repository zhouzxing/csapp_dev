#ifndef MY_TIME_H_
#define MY_TIME_H_
#include <iostream>

class Timer
{
private:
    int hour,minitue;

public:
    Timer();
    Timer(const int &h,const int &m = 0);
    ~Timer();    

    void addMinutes(const int &m);
    void addHours(const int &h);
    void reset(const int &h = 0,const int &m = 0);
    
    Timer operator+(Timer & timer);
    Timer operator*(double);
    // void operator<<(std::ostream);

    friend Timer operator*(double,Timer &);
    friend std::ostream& operator<<(std::ostream &,Timer &timer);

    void show() const; 
};

#endif