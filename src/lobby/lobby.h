#ifndef BATTLESHIPS_LOBBY
#define BATTLESHIPS_LOBBY

#include <string>
#include <map>

#include "options.h"
#include "../player/players.h"

enum LobbyStatus {
    LOBBY, GAME, WAIT, END
};

class Lobby {
    public:
        std::string name;
        LobbyStatus status;
        LobbyOption options;
        std::map<std::string, Player> players;

        Lobby(std::string n);

        void addPlayer(Player player);

        Player* getPlayer(const char* playerName);

};

#endif

/*
TODO(Tobias): Look into using a stack for player attacks, so the attack's can be queue and executed when all players have done their move
*/