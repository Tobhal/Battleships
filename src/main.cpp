#include <iostream>

#include "util/direction.h"

int main() {
    // Add players

    // Add players to other players attack board

    // Players place boat

    // Players attack

    // End game

    Direction dir(LEFT_UP);

    std::cout << dir << std::endl;
    dir.flitDirection();
    std::cout << dir.toBits() << std::endl;


    return 0;
}