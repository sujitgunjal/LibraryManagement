// src/Utility.cpp
#include "Utility.h"
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

namespace Utility {

void setColor(ConsoleColor color) {
#ifdef _WIN32
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
#else
    std::cout << "\033[" << static_cast<int>(color) << "m";
#endif
}

void resetColor() {
#ifdef _WIN32
    setColor(WHITE);
#else
    std::cout << "\033[0m";
#endif
}

void printHeader(const std::string& header) {
    setColor(YELLOW);
    std::cout << "\n========== " << header << " ==========\n";
    resetColor();
}

}
