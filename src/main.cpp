#include <iostream>

#include "player/players.h"
#include "lobby/options.h"
#include "lobby/lobby.h"

int main() {
    Lobby game1("Lobby 1");

    // Add players to lobby
    game1.addPlayer(Player("Player 1"));
    game1.addPlayer(Player("Player 2"));

    // Player place boats
    for (auto& [playerName, player] : game1.players) {
        player.placeBoat(Pos(1,1), CARRIER, Direction(RIGHT));
        //player.placeBoat(Pos(0,1), BATTLESHIP, Direction());
        //player.placeBoat(Pos(0,2), CRUISER, Direction());
        //player.placeBoat(Pos(0,3), SUBMARINE, Direction());
        //player.placeBoat(Pos(0,4), DESTROYER, Direction());
    }

    for (auto& [playerName, player] : game1.players) {
        std::cout << playerName << ": \n" << player.boatsToString() << std::endl;
    }

    return 0;
}