/*
 * Example usage of CppTUI - A simple TUI (Text User Interface) engine
 * 
 * This is a demo file showing how to implement basic TUI elements.
 * You can study, modify, and use this code in your projects,
 * even in commercial applications.
 * 
 * Original library by ANTI-TERROR Studio (https://github.com/antiterror)
 */

#include "console_utils.h"
#include <iostream>
#include <string>
#include <windows.h> // для Sleep

int main() {
    int prevWidth=0, prevHeight=0;

    while (true) {
        int width, height;
        getConsoleSize(width, height);

        if (width != prevWidth || height != prevHeight) {
            clearScreen();

            // Формируем сообщение о текущем размере
            std::string messageSize = "Now size is: " + std::to_string(width) + "x" + std::to_string(height);
            int messageX = (width - static_cast<int>(messageSize.length())) / 2; // Центр по горизонтали
            show_text(messageSize, messageX, height / 2);

            // Еще пример с другим сообщением и сдвигом по вертикали
            std::string messageHello = "Hello, C++! I from Post Siberia, EnCave.";
            int helloX = (width - static_cast<int>(messageHello.length())) / 2; // Центр
            show_text(messageHello, helloX, (height / 2) - 1);

            prevWidth=width;
            prevHeight=height;
        }

        Sleep(500);
    }

    return 0;
}