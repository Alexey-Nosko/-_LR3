#include "CNotEnoughMoneyExeption.h"
#include<iostream>
#include<string>

using namespace std;

CNotEnoughMoneyExeption::CNotEnoughMoneyExeption()
{
}

CNotEnoughMoneyExeption::CNotEnoughMoneyExeption(string message):exception(message.c_str()) {}