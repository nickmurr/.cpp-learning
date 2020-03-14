#include "iostream"
#include "Simon.h"

using namespace std;

Simon::Simon(int c) : count(c) {};

void Simon::print() {
    cout << "Simon says touch your toes " << this->count << " times" << endl;
};

int Simon::setCount(int c) {
    return this->count = c;
};

int Simon::getCount() {
    return this->count;
};

void Simon::cinCount() {
    cout << "Type a number: ";
    cin >> this->count;
}

void Simon::done() {
    cout << "Done" << endl;
}
