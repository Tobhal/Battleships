#ifndef BATTLESHIPS_OPTIONS
#define BATTLESHIPS_OPTIONS

#include <vector>

#include "../util/boat.h"
#include "../util/direction.h"
#include "../util/pos.h"

struct LobbyOption {
    Pos boardSize;

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

    int totalHits;

    LobbyOption() {
        for (const auto& b : boats) {
            totalHits += b;
        }

        boardSize = 10;
    }

    LobbyOption(int size) {
        for (const auto& b : boats) {
            totalHits += b;
        }

        boardSize += size;
    }
};


#endif