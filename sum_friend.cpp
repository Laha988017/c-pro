#include<iostream>
using namespace std;
class B;  //forward declaration
class A
{
	private:
	int a;

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
	friend void sum(A,B);
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

	friend void sum(A,B);
};


void sum(A d, B e)
{
	int total;
	total= d.a+e.m;
	cout<<"\nThe sum of the numbers is:"<<total<<endl;

}


int main()
{
	A obj;
	B obj1;
	obj.set();
	obj1.set();
	sum(obj,obj1);
	return 0;
}
