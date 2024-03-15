#include <iostream>
#include "Time.h"    
using namespace std;

int main()
{
    int Time::getHour() const { return hour; }
    int Time::getMinute() const { return minute; }
    int Time::getSecond() const { return second; }

    int Time::setHour(int hour) { this->hour = hour; }
    int Time::setMinute(int minute) { this->minute = minute; }
    int Time::setSecond(int second) { this->Second = second; }
    
    int Time::print() const
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }

    int Time::nextSecond()
    {
        second += 1;
        if (second >= 60)
        {
            second = 0
            minute += 1;
        }
        if (minute >= 60)
        {
            minute = 0
            hour += 1;
        }
        if (hour >= 24)
        {
            hour = 0
        }
    }

};