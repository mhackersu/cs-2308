// The Time class
// A 12 hour clock
// Member function definitions (implementation) in a separate file

#include <iomanip>
using namespace std;
#include "Time.h"

void Time::setHour(int hr)
{
    hour = hr; // hour is a member var
}
void Time::setMinute(int min)
{
    minute = min; // minute is a member var
}
int Time::getHour() const
{
    return hour;
}
int Time::getMinute() const
{
    return minute;
}

void Time::addHour()
{ // a private member func
    if (hour == 12)
        hour = 1;
    else
        hour++;
}
void Time::addMinute()
{
    if (minute == 59)
    {
        minute = 0;
        addHour(); // call to private member func
    }
    else
        minute++;
}

string Time::display() const
{
    // returns time in string formatted to hh:mm
    string hourString = to_string(hour);
    string minuteString = to_string(minute);
    if (minuteString.length() == 1)
        minuteString = "0" + minuteString;
    return hourString + ":" + minuteString;
}
