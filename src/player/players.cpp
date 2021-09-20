#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

#include "players.h"
#include "../lobby/options.h"
#include "../util/pos.h"

Player::Player() {}

Player::Player(std::string n) {
    name = n;
}

Player::Player(std::string n, LobbyOption* o) {
    name = n;
    options = o;
}

// Place
bool Player::canPlaceBoat(Pos pos, BoatType type, Direction direction) {
    if (!boatIsInsideBoard(pos, type, direction)) {
        std::cout << "boat is outside" << std::endl;

        return false;
    }
    
    std::vector<Pos> tmpPos;

    for (int i = 0; i <= type; i++)
        tmpPos.push_back(pos + direction.getPos());

    for (const auto& p : tmpPos) {
        for (const auto& b : boats) {
            for (const auto& place : b.placesTaken) {
                if (place == p) {
                    return false;
                }
            }
        }
    }

    return true;
}

bool Player::placeBoat(Pos pos, BoatType type, Direction direction) {
    if (canPlaceBoat(pos, type, direction)) {
        std::cout << "can place boat" << std::endl;

        boats.push_back(Boat(pos, type, direction));
        boatsAlive++;
        return true;
    } else {
        return false;
    }
}

bool Player::boatIsInsideBoard(Pos pos, BoatType type, Direction direction) {
    if (pos > 0 || pos < options->boardSize) {
        std::cout << options->boardSize << std::endl;
        std::cout << "1\n" << (pos >= 0) << "|" << (pos < options->boardSize) << std::endl;
        return false;
    }

    pos += (direction.getPos() * type);

    if (pos > 0 && pos < options->boardSize) {
        std::cout << "2" << std::endl;
        return false;
    }

    return true;
}

bool Player::boatDestroyed(Pos pos) {
    for (const auto& boat : boats) {
        if ((std::find(boat.placesTaken.begin(), boat.placesTaken.end(), pos) != boat.placesTaken.end()) && boat.isDestroyed) {
            return true;
        }
    }

    return false;
}

// Attack
bool Player::attackPlayer(Pos pos, Player* player) {
    return true;
}

bool Player::hitBoat(Pos pos) {
    return true;
}

bool Player::canShoot(Pos pos, Player* player) {
    return true;
}

// Print
std::string Player::boatsToString() {
    std::string retString;

    std::cout << boats.size() << std::endl;

    for (auto& boat : boats) {
        // retString += boat.getPos() + "; ";
    }

    return retString;
}