#include "CWindow2.h"
#include "CWindowPin.h"
#include "—Bank—ard.h"
#include<iostream>
#include <windows.h>
#include"CAccount.h"
#include"CCashMachine.h"


using namespace std;

CWindow* CWindow2::show(CCashMachine* cashMachine)
{

	cout << "If you want to withdraw money from your account enter 1" << endl;
	cout << "If you want to see your balance enter 2" << endl;
	cout << "If you want to quit press 3" << endl;
	int kod;
	cin >> kod;
	system("cls");
	while (true)
	{
		if (kod != 1 && kod != 2 && kod != 3) {
			cout << "Please enter a correct number" << endl;
			cin >> kod;
			system("cls");
		}
		if (kod == 1 || kod == 2 || kod == 3)
		{
			break;
		}
	}
	switch (kod)
	{
	case 1: {

		cout << "Enter the amount you want to withdraw" << endl;
		int amount1 = 0;
		cin >> amount1;
	
		cashMachine->bankServer->accountSearch(cashMachine->getCard()->getAccountNumber())->withdraw(amount1);

		system("pause");
		system("cls");

		break;
	}
	case 2: {
		
		cout << cashMachine->bankServer->accountSearch(cashMachine->getCard()->getAccountNumber())->getAmountMoney() << endl;
		system("pause");
		system("cls");

		break;
	}
	case 3: {

		return nullptr;

		break;
	}


	default: 
		return this;
		break;
	

	}

	return this;

}
