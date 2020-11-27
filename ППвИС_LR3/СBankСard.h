#pragma once
#include<iostream>
#include<string>
using namespace std;
class CBankCard
{
private:
	int accountNumber;
	int cardNumber;
	string userName;
	int pin;
public:
	CBankCard()
	{

	}

	CBankCard(int accountNumber, int cardNumber, string userName, int pin);

	int getAccountNumber();
	int getCardNumber();
	string getUserName();
	int getPin();
};

