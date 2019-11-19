#include <iostream>
#include <stdlib.h>
using namespace std;
template <class T>
T Push(T Arr[],int size,T top){
	T ele;
	if(top==size-1){
   		cout<<"\nOverflow";
      		exit(0);
   	}
   	else{
   		cout<<"\nEnter the element to be inserted:";
      		cin>>ele;
   		top++;
      		Arr[top]=ele;
   	}
   	return top;
}
template <class T>
T Pop(T Arr[],int size,T top){
	T ele;
   	if(top==-1){
   		cout<<"\nUnderflow";
      		exit(0);
   	}
   	else{
   		ele=Arr[top];
   		cout<<endl<<ele<<" deleted from stack";
      		top--;
   	}
   	return top;
}
template <class T>
void Display(T Arr[],int size,T top){
	for(int i=top;i>=0;i--)
   	cout<<Arr[i]<<" ";
}
int main(){
	int Stack[10],top=-1,ch;
   do{
   	cout<<"\nEnter Your Choice:\n1.Push an element\n2.Pop an element\n3.Display Stack\n4.Exit:";
   	cin>>ch;
   	switch(ch){
   		case 1: top=Push<int>(Stack,10,top);
      				Display<int>(Stack,10,top);
               	break;
      	case 2: top=Pop<int>(Stack,10,top);
      				Display<int>(Stack,10,top);
      				break;
      	case 3: Display<int>(Stack,10,top);
      				break;
      	case 4: exit(0);
      	default: cout<<"\nWrong choice";
   	}
   }while(ch!=4);
   return 0;
}

