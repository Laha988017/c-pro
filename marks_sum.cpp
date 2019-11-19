#include<iostream>
using namespace std;
int main(){
	int marks[6],sum=0;
	cout<<"Enter the marks of the six subjects:\n";
  	for(int i=0;i<6;i++){
		cin>>marks[i];
		sum+=marks[i];
	}
	cout<<"The sum of marks is:"<<sum;
	return 0;
}
