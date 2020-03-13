#include "Simon/Simon.h"

int main() {
    Simon sim(3);
    sim.print();
    sim.cinCount();
    sim.print();
    sim.done();

    return 0;
}