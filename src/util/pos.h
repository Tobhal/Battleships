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

    bool operator==(const int& i) const {
        return (x == i && y == i);
    }

    bool operator<(const Pos& op) const {
        return (x < op.x && y < op.y);
    }

    bool operator<(const int& i) const {
        return (x < i && y < i);
    }

    bool operator>(const Pos& op) const {
        return (x > op.x && y > op.y);
    }

    bool operator>(const int& i) const {
        return (x > i && y > i);
    }

    bool operator<=(const Pos& op) const {
        return (x <= op.x && y <= op.y);
    }

    bool operator<=(const int& i) const {
        return (x <= i && y <= i);
    }

    bool operator>=(const Pos& op) const {
        return (x >= op.x && y >= op.y);
    }

    bool operator>=(const int& i) const {
        return (x >= i && y >= i);
    }

    bool operator()(const Pos& op) const {
        return (x == op.x && y == op.y);
    }

    bool operator()(const int& i) const {
        return (x == i && y == i);
    }

    Pos operator=(const Pos& op) const {
        return Pos(op.x, op.y);
    }

    Pos operator=(const int& i) const {
        return Pos(i, i);
    }

    Pos operator+(const Pos& op) const {
        return Pos(x + op.x, y + op.y);
    }

    Pos operator+(const int& i) const {
        return Pos(x + i, y + i);
    }

    Pos& operator+=(const Pos& op) {
        x += op.x;
        y += op.y;
        return *this;
    }

    Pos& operator+=(const int& i) {
        x += i;
        y += i;
        return *this;
    }

    Pos operator*(const Pos& op) const {
        return Pos(x * op.x, y * op.y);
    }

    Pos operator*(const int& i) const {
        return Pos(x * i, y * i);
    }

    Pos& operator*=(const Pos& op) {
        x *= op.x;
        y *= op.y;
        return *this;
    }

    Pos& operator*=(const int& i) {
        x *= i;
        y *= i;
        return *this;
    }
};

#endif

/*
TODO(Tobias): Change from constant type to template?
*/