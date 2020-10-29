#include "ÑBankÑard.h"

ÑBankÑard::ÑBankÑard(int accountNumber, int cardNumber, string userName, int pin)
{
	this->accountNumber = accountNumber;
	this->cardNumber = cardNumber;
	this->userName = userName;
	this->pin = pin;
}

int ÑBankÑard::getAccountNumber()
{
	return accountNumber;
}

int ÑBankÑard::getCardNumber()
{
	return cardNumber;
}

string ÑBankÑard::getUserName()
{
	return userName;
}

int ÑBankÑard::getPin()
{
	return pin;
}

