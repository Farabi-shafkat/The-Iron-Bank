#include "stdafx.h"
#include "accounts.h"
#include<iostream>
#include<fstream>
using namespace std;
// amount = 0 / id from autogen / customer id passed as parameter / 
accounts::accounts()
{
	
	cout << " account generated...\n";
}

accounts::~accounts()
{
}

void accounts::~deposit(int n)
{
	amount += n;
}
int accounts::withdraw(int n)
{
	if (amount < n) {
		cout << " not enough balance...\n";
		return 1;
	}
	amount -= n;
	return 0;
}
void accounts::transfer(int id, int n)
{
	
	if (withdraw(n) ==1)
	{
		cout << " transfer failed...\n";
		return;
	}
	//withdrawal done
	//search the account with id from file 
	//then ac.deposite(int n)
	
}