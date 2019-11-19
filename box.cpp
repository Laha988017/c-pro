#include<iostream>
using namespace std;
class Box{
	int l,b,h;
	public:
		Box(){};
		Box(int x,int y,int z){
			l=x;
			b=y;
			h=z;
		}
		void operator++(){
			l=++l;
			b=++b;
			h=++h;
		}
		void operator++(int x){
			l=l++;
			b=b++;
			h=h++;
		}
		friend Box operator+(Box,Box);
		void show(){
			cout<<"\nLength:"<<l<<"\tBreadth:"<<b<<"\tHeight:"<<h;
		}
};
Box operator+(Box b1,Box b2){
	Box t;
	t.l=b1.l+b2.l;
	t.b=b1.b+b2.b;
	t.h=b1.h+b2.h;
	return t;
}
int main(){
	Box b1(2,4,6);
	Box b2(3,5,7);
	Box b3;
	b3=operator+(b1,b2);
	cout<<"\nb3 is:";
	b3.show();
	++b1;
	cout<<"\nb1 is:";
	b1.show();
	b1++;
	cout<<"\nb1 is:";
	b1.show();
	++b2;
	cout<<"\nb2 is:";
	b2.show();
	b3=operator+(b1,b2);
	cout<<"\nb3 is:";
	b3.show();
	return 0;
}
