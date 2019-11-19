#include<iostream>
using namespace std;
class B;
class A{
	int x;
	public:
		friend class B;
		void get_data(){
			cout<<"\nEnter a value for x:";
			cin>>x;
		}
};
class B{
	int y;
	public:
		void get_data(){
			cout<<"\nEnter a value for y:";
			cin>>y;
		}
		void swap(A a,B b){
			int temp;
			temp=a.x;
			a.x=b.y;
			b.y=temp;
			cout<<"\nAfter Swapping...\n\nx="<<a.x<<"\nb="<<b.y;
		}
		void print(A a,B b){
			cout<<"\nBefore swapping...\n\nx="<<a.x<<"\nb="<<b.y;
		}
};
int main(){
	A a;
	B b;
	a.get_data();
	b.get_data();
	b.print(a,b);
	b.swap(a,b);
	return 0;
}
