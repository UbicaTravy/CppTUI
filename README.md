# CppTUI - Lightweight Text User Interface Library for C++

![C++](https://img.shields.io/badge/C++-17+-00599C?logo=cplusplus)
![License](https://img.shields.io/badge/License-MIT-green)
![Platform](https://img.shields.io/badge/Platform-Windows-0078D6)

A minimalistic TUI (Text User Interface) engine for C++ that provides basic console manipulation capabilities. Perfect for simple terminal applications that need precise text positioning.

## ✨ Features

- 📏 Get console dimensions dynamically
- � Display text at specific coordinates
- 🧹 Clear screen efficiently
- 💻 Windows API-based (lightweight, no external dependencies)
- 🚀 Simple integration (just include the headers)

## 📦 Quick Start

1. Clone the repository:
   ```bash
   git clone https://github.com/UbicaTravy/CppTUI.git
   cd CppTUI
Build the example:

bash
```
build.cmd
```
Run the demo:

bash
```
CppTUI_example.exe
```

🛠️ Usage Example

cpp
```
#include "console_utils.h"

int main() {
    int width, height;
    getConsoleSize(width, height);
    
    show_text("Hello TUI!", width/2 - 5, height/2);
    return 0;
}
```
📄 Documentation
Core Functions
Function	Description
getConsoleSize(int& cols, int& rows)	Gets current console dimensions
show_text(const std::string& text, int x, int y)	Displays text at specified coordinates
clearScreen()	Clears the console
🌟 Why Choose CppTUI?
✅ Zero dependencies - Pure Windows API
✅ Tiny footprint - Less than 100 lines of core code
✅ Commercial-friendly - MIT License
✅ Easy to extend - Simple foundation for your TUI projects

📜 License
This project is licensed under the MIT License - see the LICENSE file for details.

👨‍💻 Author
ANTI-TERROR Studio
📍 Post-Siberia

![GitHub](https://img.shields.io/badge/GitHub-Repo-blue?logo=github)
