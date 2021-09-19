#ifndef BATTLESHIPS_OPTIONS
#define BATTLESHIPS_OPTIONS

#include <vector>

#include "util/boat.h"
#include "util/direction.h"

struct LobbyOption {
    int boardX,boardY;

    std::vector<BoatType> boats {
        CARRIER,
        BATTLESHIP,
        CRUISER,
        SUBMARINE,
        DESTROYER
    };

    std::vector<Direction> direction {
        RIGHT,
        RIGHT_UP,
        RIGHT_DOWN,
        LEFT,
        LEFT_UP,
        LEFT_DOWN
    };
}


#endif