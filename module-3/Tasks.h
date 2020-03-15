#ifndef TEST_TASKS_H
#define TEST_TASKS_H

#include "iostream"
using namespace std;

struct Foots {
    int Inch;
    double Foot;
};

struct Date {
    int Days = 0;
    int Hours = 0;
    int Minutes = 0;
    int Seconds = 0;
};

class Tasks {
public:
    static double toFoots(double inch);

    static Date toDate(long seconds);
};


#endif //TEST_TASKS_H
