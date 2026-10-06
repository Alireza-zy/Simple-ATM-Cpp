#include <iostream>
using namespace std;

int main()
{
	int password;
	long int balance = 1000000;
	int choice;
	int amount;
	
	cout << "Enter password: ";
	cin >> password;
	
	if(password != 1234)
	{
		cout << "Wrong password!" << endl;
		return 0;
	}
	do
	{
		cout << endl << "===== ATM =====" << endl;
		cout << "1. Check Balance" << endl;
		cout << "2. Withdraw" << endl;
		cout << "3. Deposit" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "Balance: " << balance << endl;
				break;
				
			case 2:
				cout << "Enter amount: ";
				cin >> amount;
				
				if(amount <= balance)
				{
					balance -= amount;
					cout << "Withdrawal successful!" << endl;
					cout << "New balance: " << balance << endl;
				}
				else
				{
					cout << "Not enough balance!" << endl;
				}
					break;
			
			case 3:
				cout << "Enter amount: ";
				cin >> amount;
				
				if(amount > 0)
				{
					balance += amount;
					cout << "Deposit successful!" << endl;
					cout << "New balance: " << balance << endl;
				}
				else
				{
					cout << "Invalid amount!" << endl;
				}
				break;
				
			case 4:
				cout << "Thank you." << endl;
				break;
			default:
				cout << "Invalid choice!" << endl;
		}
	} while(choice != 4);
	
	return 0;
}