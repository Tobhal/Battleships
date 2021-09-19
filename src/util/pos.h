#ifndef BATTELSHIPS_POS
#define BATTLESHIPS_POS

/*
    Replace with better vec2
*/
struct pos {
    int x,y;

    pos(int x=0, int y=0):x(x), y(y) {}

    bool operator==(const pos& op) const {
        return (x == op.x && y == op.y);
    }
};

#endif