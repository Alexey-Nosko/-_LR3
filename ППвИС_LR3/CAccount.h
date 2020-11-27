#pragma once
class CAccount
{
	private:
	int accountNumber;
	double amountMoney;
public:

	CAccount()
	{

	}

	CAccount(int accountNumber, double amountMoney);
	int getAccountNumber();
	double getAmountMoney();
	void withdraw(double amount);
};

