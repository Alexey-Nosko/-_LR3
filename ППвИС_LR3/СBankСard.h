#pragma once
#include<iostream>
#include<string>
using namespace std;
class �Bank�ard
{
private:
	int accountNumber;
	int cardNumber;
	string userName;
	int pin;
public:
	�Bank�ard()
	{

	}

	�Bank�ard(int accountNumber, int cardNumber, string userName, int pin);

	int getAccountNumber();
	int getCardNumber();
	string getUserName();
	int getPin();
};

