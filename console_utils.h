#ifndef CONSOLE_UTILS_H
#define CONSOLE_UTILS_H

#include <string>

// Объявление функции show_text
void show_text(const std::string &text, int x, int y);

// Объявление функции для получения размера консоли
void getConsoleSize(int &cols, int &rows);

// Объявление функции очистки экрана
void clearScreen();

#endif // CONSOLE_UTILS_H