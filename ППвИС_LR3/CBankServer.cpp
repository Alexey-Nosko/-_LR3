#include "CBankServer.h"
#include"CAccount.h"
#include<iostream>
#include <fstream>
#include <string>
#include <sstream>
#include<vector>
using namespace std;

void CBankServer::fillAccountList()
{

	// open file
	ifstream accountListFile("accountList.txt", ios::in);
	if (!accountListFile) {
		cerr << "cannot open file\n";
		exit(1);
	}

	//loop, reading line from file while more lines
	string data;
	while (getline(accountListFile, data)) {

		// split line into fields
		stringstream sst(data);
		string a;
		vector<string> vfield;
		while (getline(sst, a, ';'))
			vfield.push_back(a);
		int xx = stoi("12");

		CAccount b(stoi(vfield[0]), stoi(vfield[1]));
		accountList.push_back(b);
		
	}

	CAccount b(25, 56.20);
	accountList.push_back(b);



}

CAccount CBankServer::accountSearch(int accountNumber)
{
	vector <CAccount> ::iterator it;
	for (it = accountList.begin(); it <= accountList.end(); it++) {
		if (accountNumber == it->getAccountNumber())
		{
			break;
		}
	}	

	return *it;
}
