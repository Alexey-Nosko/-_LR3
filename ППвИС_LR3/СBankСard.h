#pragma once
#include<iostream>
#include<string>
using namespace std;
class ÑBankÑard
{
private:
	int accountNumber;
	int cardNumber;
	string userName;
	int pin;
public:
	ÑBankÑard()
	{

	}

	ÑBankÑard(int accountNumber, int cardNumber, string userName, int pin);

	int getAccountNumber();
	int getCardNumber();
	string getUserName();
	int getPin();
};

