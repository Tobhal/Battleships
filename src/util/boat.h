#ifndef BATTELSHIPS_BOAT
#define BATTELSHIPS_BOAT

#include "direction.h"

enum BoatType {
    CARRIER = 5,
    BATTLESHIP = 4,
    CRUISER = 3,
    SUBMARINE = 3,
    DESTROYER = 2
};

struct Boat {
    BoatType type;
    Direction direction;
};

#endif