#include <iostream>

#include "player/players.h"
#include "lobby/options.h"
#include "lobby/lobby.h"

int main() {
    Lobby game1("Lobby 1");

    game1.addPlayer(Player("Player 1"));
    game1.addPlayer(Player("Player 2"));

    for (const auto& [playerName, player] : game1.players) {
        std::cout << player.name << std::endl;

    }

    return 0;
}