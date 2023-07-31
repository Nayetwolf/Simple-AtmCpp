#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double balance, deposit , withdraw;
	int option;
	balance = 100; // Default Balance
	do {
	
	cout<<"\n\t***************MENU***************";

	cout<<"\n\t*                                *";

	cout<<"\n\t*      1. Check Balance          *";

	cout<<"\n\t*      2. Deposit                *";

	cout<<"\n\t*      3. Withdraw               *";

	cout<<"\n\t*      4. Transfer               *";

	cout<<"\n\t*      5. Exit                   *";

	cout<<"\n\t*                                *";

	cout<<"\n\t**********************************";
	
	cout << "\n\t Please Choose an Option: ";
	cin>>option;
	switch(option)
	{
			case 1:
				cout <<"\n\t Your Balance is: $"<< balance <<endl;
				break;
			case 2:
				cout<<"\n\t Amount You Want to deposit: $";
				cin>>deposit;
				balance += deposit; // balance =balance + deposit;
				cout<<"\n\t Your Current Balance : $"<<balance<<endl;
				break;
			case 3:
				cout <<"\n\t How Much do you want to withdraw? : $";
				cin>>withdraw;
				if(balance < withdraw)
					cout<<"\n\t You do NOT have enough money in your account to withdraw"<<endl;
				else
				balance -= withdraw; // balance = balance - deposit;
				cout << "\n\t Your Current Balance : $ "<<balance<<endl;
				break;
			case 4:
				cout << "\n\t This Service is Currently NOT Available!!!"<<endl;
				break;
			default:
				if(option != 5)
				cout<<"\n\t Invalid Option Please Try Again"<<endl;
				break;
	}
	
	
	}while(option != 5);
	system("pause");

	return 0;
	getch();
}
