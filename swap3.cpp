#include<iostream>
using namespace std;
void swap_by_ref(int * x,int * y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"a="<<*x<<" b="<<*y;
}
void swap_by_value(int x,int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"a="<<x<<" b="<<y;
}
void swap_by_ref_var(int &y,int &x){
	cout<<"a="<<y<<" b="<<x;
}

int main(){
	int a,b;
	cout<<"\nEnter first number:";
	cin>>a;
	cout<<"\nEnter the second number:";
	cin>>b;
	cout<<"\nSwapping using call by value:";
	swap_by_value(a,b);
	cout<<"\nSwapping using call by reference:";
	swap_by_ref(&a,&b);
	cout<<"\nSwapping using reference variable:";
	swap_by_ref_var(a,b);
	return 0;
}
