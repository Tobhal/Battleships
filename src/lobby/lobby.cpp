#include "lobby.h"
#include "options.h"
#include "../player/players.h"

Lobby::Lobby(std::string n) {
    name = n;
}

void Lobby::addPlayer(Player player) {
    player.options = &options;

    players.insert({player.name, player});
}

Player* Lobby::getPlayer(const char* playerName) {
    return &players[playerName];
}