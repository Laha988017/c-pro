#include<iostream>
#include<stdlib.h>
using namespace std;
int count=0;
class node{
	int ele;
	struct node *link;
	public:
		node *Create(node *);
		node *Insert_any(node *);
		node * del_any(node *);
		node * Search(node *);
		void Display(node *);
}*cur,*ptr,*start=NULL;
node * node:: Create(struct node *start){
	ptr=new node;
	if(ptr==NULL){
		cout<<"\nSpace not allocated";
		return start;
	}
	else{
		count++;
		cout<<"\nEnter the element:";
		cin>>ptr->ele;
		ptr->link=NULL;
	if(start==NULL){
		start=ptr;
		cur=ptr;
	}
	else{
		cur->link=ptr;
		cur=ptr;
	}
	}
	return start;
}
node * node:: Insert_any(struct node * start){
	int pos,i;
   struct node* p=start;
	ptr=new node;
	if(ptr==NULL){
                cout<<"\nSpace not allocated";
                return start;
        }
    cout<<"\nEnter the position at which node to be inserted:";
    cin>>pos;
    cout<<"\nEnter the element:";
    cin>>ptr->ele;
    ptr->link=NULL;
    count++;
    if(pos==1){
   	    ptr->link=start;
        start=ptr;
   }
   else{
   for(i=1;i<=pos-2;i++)
   	p=p->link;
   ptr->link=p->link;
   p->link=ptr;
	}
   return start;
}
node * node:: del_any(struct node *start){
	int pos,i;
   struct node * p=start,*q;
   if(start==NULL){
        cout<<"\nUnderflow";
        return start;
   }

   cout<<"\nEnter the position from where node should be deleted:";
   cin>>pos;
   if(pos==1){
   	p=start;
      start=start->link;
      free(p);
   }
   else{
   	for(i=1;i<=pos-1;i++){
      	q=p;
         p=p->link;
      }
      q->link=p->link;
      free(p);
   }
   count--;
   return start;
}
void node:: Display(struct node *start){
	for(ptr=start;ptr!=NULL;ptr=ptr->link){
		cout<<"->"<< ptr->ele;
    }
}
node * node::Search(struct node *start){
	int myele,flag=0,pos=1;
   struct node *p1;
   cout<<"\nEnter the Element to be searched for:";
   cin>>myele;
   for(p1=start;p1!=NULL;p1=p1->link){
   	if(p1->ele==myele){
      	flag=1;
        cout<<"\nElement found at position "<<pos;
      }
      pos++;
   }
   if(flag==0)
   	cout<<"\nElement is not present in the list";
   return start;
}
int main(){
	int choice;
	node ob;
	do{
	cout<<"\n\nEnter your choice:\n1.Create new node\n2.Display linked list\n3.Insert at a specified position\n4.Delete from specified position\n5.Count no. of nodes\n6.Search for an element\n7.Exit\n\n";
   cout<<"Enter your choice:";
	cin>>choice;
	switch(choice){
		case 1:start=ob.Create(start);
			break;
		case 2:ob.Display(start);
			break;
      case 3:start=ob.Insert_any(start);
                    break;
      case 4:start=ob.del_any(start);
      				break;
      case 5:cout<<"\nNumber of nodes in linked list are:"<<count;
      			break;
      case 6:start=ob.Search(start);
      			break;
      case 7:exit(0);
		default:cout<<"\nWrong choice";
	}
	}while(choice!=7);
	return 0;
}
