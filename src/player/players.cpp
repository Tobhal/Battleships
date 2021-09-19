#include <string>

#include "players.h"

#include "../lobby/options.h"

Player::Player() {}

Player::Player(std::string n) {
    name = n;
}

Player::Player(std::string n, LobbyOption* o) {
    name = n;
    options = o;
}

// Place
bool Player::canPlaceBoat(Pos pos, BoatType, Direction direction) {
    return true;
}

bool Player::placeBoat(Pos pos, BoatType, Direction direction) {
    return true;
}

bool Player::boatIsInsideBoard(Pos pos, BoatType, Direction direction) {
    return true;
}

bool Player::boatDestroyed(Pos pos) {
    return true;
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