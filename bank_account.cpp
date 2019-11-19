#include<iostream>
#include<stdlib.h>
class account{
	int acc_no;
	char name[20];
	float bal,amount;
	public:
		void init();
		void display();
		void deposit();
		void withdraw();
};
void account::init(){
	cout<<"\nEnter account number:";
	cin>>acc_no;
	cout<<"\nEnter Account holder's name:";
   cin.sync();
	cin.getline(name,20);
	cout<<"\nEnter Initial Balance amount:";
	cin>>bal;
}
void account:: display(){
	cout<<"\nAccount Number:"<<acc_no;
	cout<<"\nAccount Holder:"<<name;
	cout<<"\nBalance:"<<bal;
}
void account::deposit(){
	cout<<"\nEnter the amount to deposit:";
	cin>>amount;
	bal+=amount;
	cout<<"\nCurrent Balance is:"<<bal;
}
void account::withdraw(){
	cout<<"\nEnter the amount to withdraw:";
	cin>>amount;
	if((bal-amount)<500){
		cout<<"\nInsufficient Balance";
		return;
	}
	bal-=amount;
	cout<<"\nCurrent Balance after withdrawal:"<<bal;
}
int main(){
	account ob;
	int ch;
	while(1){
		cout<<"\nEnter your choice:\n1.Enter account details\n2.Display account details\n3.Deposit amount\n4.Withdraw amount\n5.Exit";
		cin>>ch;
		switch(ch){
			case 1: ob.init();
				break;
			case 2: ob.display();
				break;
			case 3:ob.deposit();
				break;
			case 4:ob.withdraw();
				break;
			case 5:exit(0);
			default: cout<<"\nWrong Choice";
		}
	}

	return 0;
}
