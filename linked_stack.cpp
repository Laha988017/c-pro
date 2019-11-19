#include<iostream>
#include<stdlib.h>
using namespace std;
class stack{
	int ele;
   struct stack *link;
    public:
        stack *Push(stack *);
        stack *Pop(stack *);
        void Display(stack *);
}*top=NULL,*ptr=NULL;
stack * stack::Push(struct stack * top){
	ptr=new stack;
   	if(ptr==NULL){
   		cout<<"\nSpace not allocated";
      		return top;
   	}
   	ptr->link=NULL;
   	cout<<"\nEnter the element:";
   	cin>>ptr->ele;
   	if(top==NULL)
   		top=ptr;
   	else{
   		ptr->link=top;
      		top=ptr;
   	}
   	return top;
}
stack * stack::Pop(struct stack * top){
	if(top==NULL){
   		cout<<"\nUnderflow";
        	return top;
   	}
   	cout<<endl<< top->ele <<" deleted from stack\n";
   	ptr=top;
   	top=top->link;
   	delete ptr;
   	return top;
}
void stack:: Display(struct stack * top){
	for(ptr=top;ptr!=NULL;ptr=ptr->link)
   		cout<< ptr->ele <<" ";
}
int main(){
	int choice;
    stack ob;
   	cout<<"\nMenu:\n1.Push in stack\n2.Pop from stack\n3.Display stack\n4.Exit\n";
   	do{
   		cout<<"\nEnter your choice:";
   		cin>>choice;
   		switch(choice){
   			case 1: top=ob.Push(top);
      				ob.Display(top);
      				break;
      			case 2: top=ob.Pop(top);
      				ob.Display(top);
               			break;
      			case 3: ob.Display(top);
      				break;
      			case 4: exit(0);
      			default: cout<<"\nWrong choice";
   		}
   	}while(choice!=4);
   	return 0;
}
