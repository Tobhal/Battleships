#ifndef BATTLESHIPS_PLAYER
#define BATTLESHIPS_PLAYER

#include <string.h>
#include <vector>
#include <map>

#include "../lobby/options.h"

#include "../util/pos.h"
#include "../util/boat.h"
#include "../util/direction.h"

enum PlayerStatus {
    TURN, WAITING, OUT
};

class Player {
    public:
        std::string name;
        int boatsAlive;
        PlayerStatus status;
        
        LobbyOption* options;

        std::vector<Pos> misses;
        std::map<std::string, std::vector<Pos>> enemyShots;
        std::map<std::string, std::vector<Pos>> enemyHits;

        Player();
        Player(std::string n);
        Player(std::string n, LobbyOption* o);

        // Place
        bool canPlaceBoat(Pos pos, BoatType, Direction direction);
        bool placeBoat(Pos pos, BoatType, Direction direction);
        bool boatIsInsideBoard(Pos pos, BoatType, Direction direction);
        bool boatDestroyed(Pos pos);

        // Attack
        bool attackPlayer(Pos pos, Player* player);
        bool hitBoat(Pos pos);
        bool canShoot(Pos pos, Player* player);

        
};

#endif