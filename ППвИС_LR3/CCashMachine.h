#pragma once
#include "—Bank—ard.h"
#include"CBankServer.h"
class CCashMachine
{
public:

	CBankCard* fillBankCardFromFile();
	void workOfCashMachine();
	bool checkPin(int pin);
	CBankServer* bankServer = new CBankServer();
	CBankCard* getCard();

private:
	CBankCard *card = nullptr;
};

