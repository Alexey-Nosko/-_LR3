#include "�Bank�ard.h"

�Bank�ard::�Bank�ard(int accountNumber, int cardNumber, string userName, int pin)
{
	this->accountNumber = accountNumber;
	this->cardNumber = cardNumber;
	this->userName = userName;
	this->pin = pin;
}

int �Bank�ard::getAccountNumber()
{
	return accountNumber;
}

int �Bank�ard::getCardNumber()
{
	return cardNumber;
}

string �Bank�ard::getUserName()
{
	return userName;
}

int �Bank�ard::getPin()
{
	return pin;
}

