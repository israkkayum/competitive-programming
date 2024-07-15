#include <iostream>
#include <string>
using namespace std;

// Define an abstract class (interface) called "CalendarInterface"
class CalendarInterface {
public:
    // Pure virtual method to get the name of the month
    virtual string getMonthName() = 0;

    // Pure virtual method to get the number of days in the month
    virtual int getNumDays() = 0;
};

// Concrete class that implements the CalendarInterface
class MyCalendar : public CalendarInterface {
public:
    string getMonthName() override {
        return "February"; // Example: Replace with actual month name
    }

    int getNumDays() override {
        return 28; // Example: Replace with actual number of days
    }
};

int main() {
    MyCalendar calendar;

    // Access the interface methods
    cout << "Month: " << calendar.getMonthName() << endl;
    cout << "Number of days: " << calendar.getNumDays() << endl;

    return 0;
}
