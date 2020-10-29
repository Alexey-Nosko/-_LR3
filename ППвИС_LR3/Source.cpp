#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class MyEx:public exception {
private:
	int data;
public:
	MyEx(string message, int data) :exception(message.c_str()) {
		this->data = data;
	}
	
	_NODISCARD virtual char const* what() const {

		int size1 = strlen("error value is : ");
		int size2 = strlen(exception::what());
		char *arr=new char [size1 + size2];
		strcpy(arr, "error value is : ");
		strcat(arr, exception::what());
		  
	    return arr;

	}


};


class MyError:public exception {

public:
	MyError(string message) :exception(message.c_str()) {

	}

};


int main() 
{
	exception e ("Error in size value");

	try {
		string s;
		int size = -8;
		if (size > 0)
			s.resize(size);
		else 
			throw( MyEx("He",156));
	}
	catch (const exception& e) {
		cout << e.what();
	}
	catch (const MyError& e) {
		cout << e.what();
	}

	







	return 0;
}