#!/bin/sh
ALL_CPP_FILES=$(find "$(cd src/; pwd)" | grep .cpp)
g++ -std=c++17 $ALL_CPP_FILES -o Battleships