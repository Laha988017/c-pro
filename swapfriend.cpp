#include<iostream>
using namespace std;
class B;  //forward declaration
class A
{
	private:
	int a,b;

	public:
	void set()
	{
		cout<<"\nEnter a number:";
		cin>>a;

	}
	void display()
	{
		cout<<"a = "<<a;
	}
	friend void swap(A,B);
	friend void show(A,B);
};

class B
{
	private:
	int m;

	public:
	void set()
	{
		cout<<"\nEnter another number:";
		cin>>m;
	}

	friend void swap(A,B);
	friend void show(A,B);
};


void swap(A d, B e)
{
	int temp;
	temp = d.a;
	d.a=e.m;
	e.m=temp;
	cout<<endl<<"After swapping.......\n"<<"a = "<<d.a<<"\nb = "<<e.m<<endl;

}

void show(A d, B e)
{
	cout<<endl<<"Before swapping.......\n""a = "<<d.a<<"\nb = "<<e.m<<endl;
}

int main()
{
	A obj;
	B obj1;
	obj.set();
	obj1.set();
	show(obj,obj1);
	swap(obj,obj1);
//	show(obj,obj1);
}
