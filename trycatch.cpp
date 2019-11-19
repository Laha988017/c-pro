#include<iostream>
using namespace std;
int main(){
	int x,y=1;
	float result;
	try{
		cout<<"\nEnter the dividend:";
		cin>>x;
		if(cin.fail())
                	throw 1;
		cout<<"\nEnter the divisor:";
		cin>>y;
		if(cin.fail())
                        throw 2;
		else if(y==0)
			throw y;
		else{
			result=float(x)/float(y);
			cout<<"\nResult="<<result;
		}
	}
	catch(int err){
		if(err==0)
			cout<<"\nDivision by zero not possible";
		else{
			cin.clear();
			cin.ignore();
			cout<<"\nWrong datatype entered";
		}
	}
	return 0;
}
