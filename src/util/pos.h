#ifndef BATTLESHIPS_POS
#define BATTLESHIPS_POS

/*
    Replace with better vec2
*/
struct Pos {
    int x,y;

    Pos(int x=0, int y=0):x(x), y(y) {}

    bool operator==(const Pos& op) const {
        return (x == op.x && y == op.y);
    }
};

#endif