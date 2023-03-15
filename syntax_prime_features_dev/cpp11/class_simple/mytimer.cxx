#include <iostream>
#include "mytime.h"


Timer::Timer()
{
    hour = minitue = 0;
}
Timer::Timer(const int &h,const int &m)
{
    hour = h;
    minitue = m;
}
Timer::~Timer()
{
    std::cout << "bye\n";
}

void Timer::addMinutes(const int &m)
{
    minitue += m;
    hour += minitue / 60;
    minitue %= 60;    
}

void Timer::addHours(const int &h)
{
    hour += h;
}
void Timer::reset(const int &h ,const int &m)
{
    hour = h;
    minitue = m;
    //测试this指针
    // this->minitue += 2;
    // this->addHours(h);
}

Timer Timer::operator+(Timer & timer)
{
    // minitue += timer.minitue;
    // hour += (timer.hour + minitue / 60);
    // minitue %= 60;
    // this->addMinutes(timer.minitue);
    // this->addHours(timer.hour);
    addMinutes(timer.minitue);
    addHours(timer.hour);
    return *this;

    // Timer total;
    // total.addMinutes(timer.minitue);
    // total.addMinutes(this->minitue);
    // total.addHours(timer.hour);
    // total.addHours(this->hour);
    // return total;
}

Timer Timer::operator*(double d_value)
{
    minitue *= d_value;
    hour *= d_value;
    hour += minitue / 60;
    minitue %= 60;
    return *this;
}

Timer operator*(double d_value, Timer & timer)
{

    Timer result;
    result.minitue = timer.minitue * d_value;
    result.hour = timer.hour * d_value;
    result.hour += result.minitue / 60;
    result.minitue = result.minitue % 60;
    result.show();
    return result;
}

std::ostream& operator<<(std::ostream &os,Timer &timer)
{
    os<<timer.hour<<":"<<timer.minitue;
    return os;
}

void Timer::show() const
{
    std::cout << "hour:"<< hour << "  "
        << "minutes:" << minitue << std::endl;
}