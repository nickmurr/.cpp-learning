#include "Birthday.h"
#include "iostream"

using namespace std;

Birthday::Birthday(int day, int month, int year) : day(day), month(month), year(year) {}

string Birthday::printBirthday() {
    return to_string(this->day) + "/" + to_string(this->month) + "/" + to_string(this->year);
}