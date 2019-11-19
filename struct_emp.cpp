#include<iostream>
#include<string.h>
using namespace std;
struct employee{
	int age;
	char name[20],Desig[20];
	float sal;
	void input();
	void display();
};
void employee::input(){
	cout<<"\nEnter Employee's name:";
	cin.ignore();
	cin.getline(name,20);
	cout<<"\nEnter Employee's Designation:";
   	cin.ignore();
	cin.getline(Desig,20);
	cout<<"\nEnter Employee's age:";
	cin>>age;
	cout<<"\nEnter Employee's Salary:";
	cin>>sal;
}
void employee::display(){
	cout<<"\nEmployee Name:"<<name;
	cout<<"\nEmployee Designation:"<<Desig;
	cout<<"\nAge:"<<age;
	cout<<"\nSalary:"<<sal;
}
int main(){
	employee emp[3];
	for(int i=0;i<3;i++)
		emp[i].input();
	for(int i=0;i<3;i++)
		emp[i].display();
	return 0;
}
