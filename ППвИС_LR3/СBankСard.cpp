#include "ÑBankÑard.h"

CBankCard::CBankCard(int accountNumber, int cardNumber, string userName, int pin)
{
	this->accountNumber = accountNumber;
	this->cardNumber = cardNumber;
	this->userName = userName;
	this->pin = pin;
}

int CBankCard::getAccountNumber()
{
	return accountNumber;
}

int CBankCard::getCardNumber()
{
	return cardNumber;
}

string CBankCard::getUserName()
{
	return userName;
}

int CBankCard::getPin()
{
	return pin;
}

