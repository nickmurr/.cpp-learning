#include "Person.h"
#include "Birthday.h"
#include "iostream"

Person::Person(string name, Birthday bd) : name(name), bd(bd) {}

void Person::printBirthday() {
    cout << this->name << " was born in " << this->bd.printBirthday() << endl;
}