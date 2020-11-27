#include "CCashMachine.h"
#include<iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "—Bank—ard.h"
#include "CWindowPin.h"
#include "CAccount.h"
#include "CBankServer.h"

using namespace std;

CBankCard* CCashMachine :: fillBankCardFromFile() {

	// open file
	ifstream BankCardFile("bankCardFile.txt", ios::in);
	if (!BankCardFile) {
		cerr << "cannot open file\n";
		exit(1);
	}

	//loop, reading line from file while more lines
	string data;
	while (getline(BankCardFile, data)) {

		// split line into fields
		stringstream sst(data);
		string a;
		vector<string> vfield;
		while (getline(sst, a, ';'))
			vfield.push_back(a);


	
		CBankCard *temp=new CBankCard(stoi(vfield[0]), stoi(vfield[1]), vfield[2], stoi(vfield[3]));

		return temp;
	}
}

void CCashMachine::workOfCashMachine()
{
	card = fillBankCardFromFile();
	bankServer->fillAccountList();
	CWindow* window = new CWindowPin();
	while (window!=nullptr) {
		window=window->show(this);
	}
	
}

bool CCashMachine::checkPin(int pin)
{

	return (pin == card->getPin());
}

CBankCard* CCashMachine::getCard()
{
	return card;
}
