#include<iostream>
using namespace std;
class cricket{
	char name[20];
	int run,four,six;
	public:
		void init();
		void display();
		void update();
};
void cricket::init(){
	cout<<"\nEnter batsman's name:";
	cin>>name;
	run=0;
	four=0;
	six=0;
}
void cricket::display(){
	cout<<"\nName of Batsman:"<<name;
	cout<<"\nNumber of Fours:"<<four;
	cout<<"\nNumber of Sixes:"<<six;
	cout<<"\nTotal Runs Scored:"<<run;
}
void cricket::update(){
	int curr_run;
	cout<<"\nEnter the runs scored:";
	cin>>curr_run;
	run+=curr_run;
	if(curr_run==4)
		four++;
	if(curr_run==6)
		six++;
}
int main(){
	cricket batm;
	int ch=1;
	batm.init();
	while(ch==1){
		batm.update();
		cout<<"\nEnter more runs?(1 for yes,0 for no):";
		cin>>ch;
	}
	batm.display();
	return 0;
}
