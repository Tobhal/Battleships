#ifndef BATTELSHIPS_BOAT
#define BATTELSHIPS_BOAT

#include <vector>
#include <algorithm>

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
    BoatType type;
    bool isDestroyed = false;
    std::vector<Pos> placesTaken;
    std::vector<Pos> placesDamage;

    Boat(Pos p, BoatType b, Direction d) {
        type = b;

        for (int i = 0; i < type; i++) {
            placesTaken.push_back(Pos(p) + (d * i));
        }

        placesTaken.resize(b);
        placesDamage.resize(b);
    }

    bool addDamage(Pos pos) {
        if (std::find(placesTaken.begin(), placesTaken.end(), pos) != placesTaken.end()) {
            if (!(std::find(placesDamage.begin(), placesDamage.end(), pos) != placesDamage.end())) {
                placesDamage.push_back(pos);
            }

            if (placesDamage.size() == placesDamage.size()) {
                isDestroyed = true;
            }

            return true;
        }

        return false;
    }

    
        
};

#endif