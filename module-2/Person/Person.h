#ifndef TEST_PERSON_H
#define TEST_PERSON_H

#include "iostream"
#include "Birthday.h"

using namespace std;


class Person {
public:
    Person(string name, Birthday bd);

    void printBirthday();

private:
    string name;
    Birthday bd;
};


#endif //TEST_PERSON_H
