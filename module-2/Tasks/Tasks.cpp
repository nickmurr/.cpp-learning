#include "Tasks.h"
#include "iostream"

using namespace std;


void Tasks::userInfo() {
    string name;
    string address;

    cout << "Type name: ";
    cin >> name;

    cout << "Type address: ";
    cin >> address;

    cout << name << " lives at " << address << endl;
}

void Tasks::toYard() {
    int farlong;
    cout << "Type distance in farlongs: ";
    cin >> farlong;
    int yard = farlong * 220;
    int metres = farlong * 201168;

    cout << farlong << " farlong(s) = " << yard << " yards or " << metres << " metres " << endl;
}

void Tasks::ageInMonth() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age in month is: " << age * 12;
}

int Tasks::toFahrengeit(int c) {
    return 1.8 * c + 32;
}
