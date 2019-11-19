#include<iostream>
using namespace std;
class A{
	static int c;
	public:
		void inc_c(){
			c++;
		}
		void show(){
			cout<<"\nThe value of c is:"<<c;
		}
};
int A:: c=0;
int main(){
	A a1,a2,a3;
	a1.inc_c();
	a1.show();
	a2.inc_c();
	a2.show();
	a3.inc_c();
	a3.show();
	return 0;
}

