#ifndef BATTLESHIPS_DIRECTION
#define BATTLESHIPS_DIRECTION

#include <bitset>

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

    std::bitset<8> toBits() {
        return std::bitset<8>(direction);
    }
};

#endif