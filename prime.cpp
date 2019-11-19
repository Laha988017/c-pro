#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int range,count=0,flag;
	cout<<"Enter the range upto which prime numbers are required:";
	cin>>range;
	cout<<"\nThe prime numbers are:";
	for(int i=2;i<=range;i++){
		flag=0;
		for(int j=2;((j<=sqrt(i))&&(j!=i));j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			count++;
			cout<<i<<" ";
		}
	}
	cout<<"\nThe number of primes in given range is:"<<count;
	return 0;
}
