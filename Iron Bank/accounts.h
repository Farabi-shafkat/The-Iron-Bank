#pragma once

class accounts
{
	int id;
	int customer_id;
	int amount;
	char type;
public:
	accounts();
	int get_id() { return id; }
	int get_customer_id() { return customer_id; }
	char get_type() { return type; }
	int get_amount() { return amount; }
	void deposit(int n);
	int withdraw(int n);
	void transfer(int id, int n);
	~accounts();
};

