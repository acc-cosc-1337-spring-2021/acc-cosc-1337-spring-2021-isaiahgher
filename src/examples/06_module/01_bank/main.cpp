#include "bank_account.h"
#include<iostream>
using std::cout;

int main()
{
	BankAccount account;
	cout<<sizeof(account)<<"\n";
	auto balance=account.get_balance();

	cout<<"Balance:"<<balance<<"\n";

	return 0;
}