#include "CAccount.h"

CAccount::CAccount(int accountNumber, double amountMoney)
{

	this->accountNumber = accountNumber;
	this->amountMoney = amountMoney;

}

int CAccount::getAccountNumber()
{
	return accountNumber;
}
