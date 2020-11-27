#include "CAccount.h"
#include <fstream>
#include <string>
#include <sstream>
#include "CNotEnoughMoneyExeption.h"
#include <windows.h>

using namespace std;


CAccount::CAccount(int accountNumber, double amountMoney)
{

	this->accountNumber = accountNumber;
	this->amountMoney = amountMoney;

}

int CAccount::getAccountNumber()
{
	return accountNumber;
}

double CAccount::getAmountMoney()
{
	return amountMoney;
}

void CAccount::withdraw(double amount)
{
	
	try
	{
		if (amount > amountMoney) {
			throw(CNotEnoughMoneyExeption( "You do not have enough money \n Your amount: "+to_string(amount)+" > then your amountMoney: "+ to_string(amountMoney)));
		}
		if(amount <= 0){

			throw(CNotEnoughMoneyExeption(" Your amount: " + to_string(amount)));
		
		}
		amountMoney = amountMoney - amount;
	}
	catch (CNotEnoughMoneyExeption e) {

		cout << e.what()<<endl;
		system("pause");
		system("cls");

	}

	catch (const std::exception&)
	{
		cout << "Problem with your account" << endl;
	}
	

}
