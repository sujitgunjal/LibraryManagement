// include/Utility.h
#ifndef UTILITY_H
#define UTILITY_H

#include <string>

namespace Utility {
    enum ConsoleColor {
#ifdef _WIN32
        BLACK = 0,
        BLUE = 1,
        GREEN = 2,
        CYAN = 3,
        RED = 4,
        MAGENTA = 5,
        BROWN = 6,
        LIGHTGRAY = 7,
        DARKGRAY = 8,
        LIGHTBLUE = 9,
        LIGHTGREEN = 10,
        LIGHTCYAN = 11,
        LIGHTRED = 12,
        LIGHTMAGENTA = 13,
        YELLOW = 14,
        WHITE = 15
#else
        RESET = 0,
        BLACK = 30,
        RED = 31,
        GREEN = 32,
        YELLOW = 33,
        BLUE = 34,
        MAGENTA = 35,
        CYAN = 36,
        WHITE = 37
#endif
    };

    void setColor(ConsoleColor color);
    void resetColor();
    void printHeader(const std::string& header);
}

#endif // UTILITY_H
