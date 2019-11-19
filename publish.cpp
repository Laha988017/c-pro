#include <iostream>
#include <string.h>
using namespace std;
class publication{
	char title[30];
	float price;
	public:
		void getdata(){
			cout<<"\nEnter the Title:";
			cin.getline(title,30);
			cout<<"\nEnter the price:";
			cin>>price;
		}
		void putdata(){
			cout<<"\nTitle:"<<title;
			cout<<"\nPrice:"<<price;
		}
};
class book:private publication{
	int page_count;
	public:
		void getdata(){
			publication::getdata();
			cout<<"\nEnter the number of pages:";
			cin>>page_count;
		}
		void putdata(){
			publication::putdata();
			cout<<"\nNo. of pages:"<<page_count;
		}
};
class tape:private publication{
	int mins;
	public:
		void getdata(){
			cin.ignore();
			publication::getdata();
			cout<<"\nEnter the Playing Time:";
			cin>>mins;
		}
		void putdata(){
			publication::putdata();
			cout<<"\nPlaying Time:"<<mins;
		}
};
int main(){
	book b;
	tape t;
	b.getdata();
	t.getdata();
	b.putdata();
	t.putdata();
	return 0;
}
