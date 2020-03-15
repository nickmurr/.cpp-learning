#include "Tasks.h"

double Tasks::toFoots(double inch) {
    const int s = 12;
    return inch / s;
}

Date Tasks::toDate(long seconds) {
    Date date;
    long init = seconds;

    const int secInDay = 86400;
    const int secInHour = 3600;
    const int secInMin = 60;

    date.Days = seconds / secInDay;
    seconds -= date.Days * secInDay;

    date.Hours = seconds / secInHour;
    seconds -= date.Hours * secInHour;

    date.Minutes = seconds / secInMin;
    date.Seconds = seconds - date.Minutes * secInMin;

    cout << init << " seconds = " << date.Days << " days, " << date.Hours << " hours, ";
    cout << date.Minutes << " minutes, " << date.Seconds << " seconds." << endl;

    return date;
}
