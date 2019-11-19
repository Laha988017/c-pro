#include<iostream>
using namespace std;
class complex2;
class complex1{
	int real,img;
	public:
		friend complex1 complex_add(complex1,complex2);
		void get_complex(){
			cout<<"\nEnter real part of first complex number:";
			cin>>real;
			cout<<"\nEnter imaginary part of first complex number:";
			cin>>img;
		}
		void print(){
			cout<<"\nThe sum of two complex numbers is:"<<real<<" + i"<<img;
		}
};
class complex2{
	int real,img;
	public:
		friend complex1 complex_add(complex1,complex2);
		void get_complex(){
                        cout<<"\nEnter real part of second complex number:";
                        cin>>real;
                        cout<<"\nEnter imaginary part of second complex number:";
                        cin>>img;
                }
};
complex1 complex_add(complex1 c1,complex2 c2){
	complex1 c3;
	c3.real=c1.real+c2.real;
	c3.img=c1.img+ c2.img;
	return c3;
}
int main(){
	complex1 c1,c3;
	complex2 c2;
	c1.get_complex();
	c2.get_complex();
	c3=complex_add(c1,c2);
	c3.print();
	return 0;
}
