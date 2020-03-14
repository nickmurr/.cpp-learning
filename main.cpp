#include "module-2/Tasks/Tasks.h"
#include "iostream"

using namespace std;

int main() {
//    Tasks::userInfo();
//    Tasks::toYard();
//    Tasks::ageInMonth();
    int c;
    cout << "Enter a Celcius value: ";
    cin >> c;
    cout << c << " degrees Celsius is " << Tasks::toFahrengeit(c) << " degrees Fahrenheit" << endl;
    return 0;
}