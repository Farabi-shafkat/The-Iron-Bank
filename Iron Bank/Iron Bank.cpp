// Iron Bank.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "accounts.h"
#include<iostream>
#include<fstream>
using namespace std;
void welcome()
{
	cout << "\n\n\t\t===        THE IRON BANK      ===\n";
	cout << "\t\t=================================\n\n";
	cout << " enter eny key to continue...\n";
	getchar();
	
}
int  menu()
{
	cout << " 1. create account\n";
	cout << " 2. show \n";
	cout<< "\n enter a choice: \t";
	int c;
	cin >> c;
	return c;
}
void create_account()
{
	cout << "\n account is creating...\n";
}
void show_accounts()
{
	cout << "\n accounts are shown...\n";
}
int main()
{
	welcome();
	int choice = menu();
	switch (choice) {
	case 1:
		create_account();
		break;
	case 2:
		show_accounts();
		break;
	}
    

	//program ends here!
	cout << "\n\n";
	system("pause");
	return 0;
}