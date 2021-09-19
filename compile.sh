#!/bin/sh
ALL_CPP_FILES=$(find "$(cd src/; pwd)" | grep .cpp)
ALL_H_FILES=$(find "$(cd src/; pwd)" | grep .h)
g++ -std=c++17 $ALL_CPP_FILES -o Battleships