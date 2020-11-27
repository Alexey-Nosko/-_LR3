#pragma once
#include "CWindow.h"
#include"CCashMachine.h"
class CWindow2 : public CWindow
{
	CWindow* show(CCashMachine* cashMachine);
};

