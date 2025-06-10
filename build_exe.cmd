@echo off
mkdir build 2>nul || rem
g++ -static -o build/mygame main.cpp console_utils.cpp menu/menu.cpp -std=c++17
pause