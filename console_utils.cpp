/*
 * CppTUI - Lightweight Text-based User Interface library for C++
 * 
 * Originally developed by ANTI-TERROR Studio (https://github.com/UbicaTravy/CppTUI/tree/v0.1_BETA-TEST)
 * 
 * License: This code is provided as-is under MIT License.
 * You can freely use, modify, and distribute it in your projects,
 * including commercial ones, without any restrictions.
 */
 
#include "console_utils.h"
#include <windows.h>
#include <iostream>

// The logic for getting Console size
void getConsoleSize(int &cols, int &rows) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (GetConsoleScreenBufferInfo(hStdOut, &csbi)) {
        cols = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    } else {
        cols = rows = 0;
    }
}

// For Clearing Screen
void clearScreen() {
    system("cls");
}

// Show text
void show_text(const std::string &text, int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, coord);
    std::cout << text;
}