#include <iostream>

#include "player/players.h"
#include "lobby/options.h"
#include "lobby/lobby.h"

int main() {
    Pos p(1, 1);

    p *= Pos(1,-1);

    std::cout << p.x << " - " << p.y << std::endl;
    
    
    // Add players

    Lobby game1("Lobby 1");

    Player p1("Player 1");
    Player p2("Player 2");

    game1.addPlayer(p1);
    game1.addPlayer(p2);

    // Add players to other players attack board

    // Players place boat

    // Players attack

    // End game


    return 0;
}