#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
class complex{
	float real,imag;
	public:
		complex(){}
		complex(float a,float b){
			real=a;
			imag=b;
		}
		complex sum(complex c1,complex c2){
			complex c;
			c.real=c1.real+c2.real;
			c.imag=c2.imag+c1.imag;
			return c;
		}
		void show(){
			cout<<real<<"+i"<<imag;
		}
		complex subtract(complex c1,complex c2){
                        complex c;
                        c.real=c1.real-c2.real;
                        c.imag=c2.imag-c1.imag;
                        return c;
                }
		complex multiply(complex c1,complex c2){
                        complex c;
                        c.real=(c1.real*c2.real)-(c1.imag*c2.imag);
                        c.imag=(c2.imag*c1.real)+(c2.real*c1.imag);
                        return c;
                }
		complex divide(complex c1,complex c2){
			complex c;
                        c.real=((c1.real*c2.real)+(c1.imag*c2.imag))/(pow(c2.real,2)+pow(c2.imag,2));
                        c.imag=((c2.real*c1.imag)-(c2.imag*c1.real))/(pow(c2.real,2)+pow(c2.imag,2));
                        return c;
                }

};
int main(){
	complex c3;
	float r,i;
	int ch;
	cout<<"\nEnter the real part of 1st complex number:";
	cin>>r;
	cout<<"\nEnter the imaginary part of 1st complex number:";
	cin>>i;
	complex c1(r,i);
	cout<<"\nEnter the real part of 2nd complex number:";
        cin>>r;
        cout<<"\nEnter the imaginary part of 2nd complex number:";
	cin>>i;
	complex c2(r,i);
	cout<<"\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\nEnter your choice:";
	cin>>ch;
	switch(ch){
		case 1: c3=c3.sum(c1,c2);
			break;
		case 2:c3=c3.subtract(c1,c2);
			break;
		case 3:c3=c3.multiply(c1,c2);
			break;
		case 4: c3=c3.divide(c1,c2);
			break;
		case 5: exit(0);
		default: cout<<"\nWrong Choice";
	}
	cout<<"\nFirst Number is:";
	c1.show();
	cout<<"\nSecond number is:";
	c2.show();
	cout<<"\nResult:";
	c3.show();
	return 0;
}
