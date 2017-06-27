/**
* @file Common.cpp
* @author Vihos
*/

#include "Common.h"

void Common::msgLoop() {
    MSG message;
    BOOL bReturn;

    while ((bReturn = GetMessage(&message, NULL, 0, 0))) {
        if (bReturn == -1) {
            // TODO handle error code.

            // ...

            // will exit
        } else {
            TranslateMessage(&message);
            DispatchMessage(&message);
        }
    }
}