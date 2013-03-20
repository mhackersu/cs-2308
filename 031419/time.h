// The Time class
// A 12 hour clock
// Class declaration (specification) in a separate file

#include <string>
using namespace std;

// models a 12 hour clock
// models a 12 hour clock
class Time
{

  private:
    int hour;
    int minute;

  public:
    Time();
    Time(int, int);

    void setHour(int);
    void setMinute(int);
    int getHour() const;
    int getMinute() const;

    string display() const;
};
