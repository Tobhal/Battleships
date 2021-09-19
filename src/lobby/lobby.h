#ifndef BATTLESHIPS_LOBBY
#define BATTLESHIPS_LOBBY

#include <string>

#include "option.h"

enum LobbyStatus {
    LOBBY, GAME, WAITING, END;
};

class Lobby {
    std::string name;
    LobbyStatus status;
    LobbyOptions options;

    Lobby(std::string name);

};

#endif