#pragma once
#include"CAccount.h"
#include<iostream>
#include<vector>
using namespace std;
class CBankServer
{
private:
	vector<CAccount> accountList;
public:
	void fillAccountList();
	CAccount accountSearch(int accountNumber);

};

