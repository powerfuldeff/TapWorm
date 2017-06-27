/**
* @file KeyBoard.cpp
* @author Vihos
*/

#include "Keyboard.h"

LRESULT Keyboard::hookProc(int nCode, WPARAM wParam, LPARAM lParam) {
    std::cout << "Test static func call" << "\n";
}
