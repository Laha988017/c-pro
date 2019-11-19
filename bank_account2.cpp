#include<iostream>
#include<stdlib.h>
using namespace std;
class account{
	char name[20];
	float bal,amount;
	public:
		void init();
		void display();
		void deposit();
		void withdraw();
		int acc_no;
};
void account::init(){
	cout<<"\nEnter account number:";
	cin>>acc_no;
	cout<<"\nEnter Account holder's name:";
	cin>>name;
	cout<<"\nEnter Initial Balance amount:";
	cin>>bal;
}
void account:: display(){
	cout<<"\n\nAccount Number:"<<acc_no;
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
	account ob[10];
	int ch,j,ano;
	while(1){
		cout<<"\nEnter your choice:\n1.Enter account details\n2.Display account details\n3.Deposit amount\n4.Withdraw amount\n5.Exit";
		cin>>ch;
		switch(ch){
			case 1:for(j=0;j<=5;j++) 
					ob[j].init();
				break;
			case 2:for(j=0;j<=5;j++)
					ob[j].display();
				break;
			case 3:cout<<"\nEnter the account number in which amount to be deposited:";
				cin>>ano;
				for(j=0;j<=5;j++)
					if(ob[j].acc_no==ano)
						ob[j].deposit();
				break;
			case 4:cout<<"\nEnter the account number from which amount to be withdrawn :";
                                cin>>ano;
                                for(j=0;j<=5;j++)
                                        if(ob[j].acc_no==ano)
						ob[j].withdraw();
				break;
			case 5:exit(0);
			default: cout<<"\nWrong Choice";
		}
	}

	return 0;
}
