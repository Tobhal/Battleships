#ifndef BATTELSHIPS_BOAT
#define BATTELSHIPS_BOAT

#include <vector>

#include "direction.h"
#include "pos.h"

enum BoatType {
    CARRIER = 5,
    BATTLESHIP = 4,
    CRUISER = 3,
    SUBMARINE = 3,
    DESTROYER = 2
};

struct Boat {
    Pos pos;
    BoatType type;
    Direction direction;
    bool isDestroyed = false;
    std::vector<Pos> placesTaken;
    std::vector<Pos> placesDamage;

    Boat(Pos p, BoatType b, Direction d) {
        pos = p;
        type = b;
        direction = d;

        for (int i = 0; i < type; i++) {
            
        }
    }
        
};

#endif