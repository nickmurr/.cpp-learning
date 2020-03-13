#ifndef TEST_BIRTHDAY_H
#define TEST_BIRTHDAY_H

#include "iostream"

using namespace std;


class Birthday {
public:
    Birthday(int day, int month, int year);

    string printBirthday();

private:
    int day;
    int month;
    int year;
};


#endif //TEST_BIRTHDAY_H
