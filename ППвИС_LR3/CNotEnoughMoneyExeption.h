#pragma once
#include<iostream>
#include<string>

using namespace std;

class CNotEnoughMoneyExeption : public exception
{
public:

	CNotEnoughMoneyExeption();
	
	CNotEnoughMoneyExeption(string message); 
	

};

