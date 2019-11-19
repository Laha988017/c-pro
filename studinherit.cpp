#include<iostream>
using namespace std;
class Student{
	int rollno;
	char name[20];
	public:
		void get_data(){
			cout<<"\nEnter Student's Roll Number:";
			cin>>rollno;
			cout<<"\nEnter Student's Name:";
			cin>>name;
		}
		void display(){
			cout<<"\nRoll No:"<<rollno;
			cout<<"\nName:"<<name;
		}
};
class Test:protected Student{
	int marks[2];
	Student s;
	public:
		void get_marks(){
			s.get_data();
			for(int i=0;i<2;i++){
				cout<<"\nEnter the marks for Subject "<<i+1<<":";
				cin>>marks[i];
			}
		}
		int calc_sum(){
			int sum=0;
			for(int i=0;i<2;i++)
                                sum+=marks[i];
			return sum;
                }
		void display(){
			s.display();
			cout<<"\nMarks for Subject 1:"<<marks[0];
			cout<<"\nmarks for Subject 2:"<<marks[1];
		}
};
class Result: private Test{
	public:
		Test t;
		void get_data(){
			t.get_marks();
		}
		void display(Test &t){
			t.display();
			cout<<"\nTotal marks obtained:"<<t.calc_sum();
		}
};
int main(){
	Result r;
	r.get_data();
	r.display(r.t);
	return 0;
}
