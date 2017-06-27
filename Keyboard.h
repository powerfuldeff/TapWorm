/**
* @file KeyBoard.h
* @author Vihos
*/

#ifndef TAPWORM_KEYBOARD_H
#define TAPWORM_KEYBOARD_H

#include <iostream>
#include <windows.h>

class Keyboard {
    public:
        static LRESULT CALLBACK hookProc(int nCode, WPARAM wParam, LPARAM lParam);
};


#endif //TAPWORM_KEYBOARD_H
