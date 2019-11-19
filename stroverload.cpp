#include<iostream>
#include<string.h>
using namespace std;
class String{
	char str1[20];
	public:
		int operator ==(String &ob){
			if(strcmp(str1,ob.str1)==0)
				return 1;
			else
				return 0;
		}
		int operator >(String &ob){
			if(strlen(str1)>strlen(ob.str1))
				return 1;
			else
				return 0;
		}
		void get_str(){
			cout<<"\nEnter the first string:";
			cin>>str1;
		}
};
int main(){
	String s1,s2;
	s1.get_str();
	s2.get_str();
	if(s1==s2)
		cout<<"\nStrings are same";
	else if(s1>s2)
		cout<<"\nString 1 is greater in length";
	else
		cout<<"\nString 1 has shorter length";
	return 0;
}
