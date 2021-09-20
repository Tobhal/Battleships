#ifndef BATTLESHIPS_DIRECTION
#define BATTLESHIPS_DIRECTION

#include <bitset>
#include <map>

#include "pos.h"

/*
    first set (of 4 bist) is left or right
        0001 = right
        0010 = left
    
    seccond set (of 4 bits) if up or down
        0000 = not change hight
        0001 = up
        0010 = down

    to change direction change the first set
*/
enum Dir {
    RIGHT = 16,      // 0001 0000
    RIGHT_UP = 17,   // 0001 0001
    RIGHT_DOWN = 18, // 0001 0010

    LEFT = 32,       // 0010 0000
    LEFT_UP = 34,    // 0010 0010
    LEFT_DOWN = 33   // 0010 0001
};

struct Direction {
    int direction;

    std::map<int, Pos> intToPos {
        {16, Pos(1, 0)},
        {17, Pos(1, 1)},
        {18, Pos(1, -1)},
        {32, Pos(-1, 0)},
        {33, Pos(-1, 1)},
        {34, Pos(-1, -1)}
    };

    Direction(Dir dir = RIGHT) {
        direction = dir;
    }

    operator const int() {
        return direction;
    }

    void flitDirection() {
        direction ^= 1UL << 4;
        direction ^= 1UL << 5;
    }

    Pos getPos() {
        return intToPos[direction];
    }

    std::bitset<8> toBits() {
        return std::bitset<8>(direction);
    }
};

#endif