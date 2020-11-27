#pragma once
#include "CWindow.h"
#include "—Bank—ard.h"
#include"CCashMachine.h"
#include <iostream>

using namespace std;

class CWindowPin : public CWindow
{
	private:
		int pinCode;

public:
	
	CWindow* show(CCashMachine* cashMachine);

};

