#pragma once
#include "CWindow.h"
#include "—Bank—ard.h"
#include <iostream>

using namespace std;

class CWindow1 : public CWindow
{
	private:
		int pinCode;

public:
	friend std::istream& operator>> (std::istream& in, CWindow1& point);
	friend std::ostream& operator<< (std::ostream& out, const CWindow1& point);
	void show();

};

