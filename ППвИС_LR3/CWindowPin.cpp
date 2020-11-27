#include "CWindowPin.h"
#include "CWindow.h"
#include "CCashMachine.h"
#include "CWindow2.h"
#include <windows.h>

CWindow* CWindowPin::show(CCashMachine* cashMachine) {
    
    cout << "Input your pin" << endl;

    int pinCode = 0;
    cin >> pinCode;
    if (cashMachine->checkPin(pinCode))
    {
        system("cls");
        return new CWindow2();
    }
    else
        system("cls");
        return this;
    
}
