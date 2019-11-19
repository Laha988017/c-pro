#include <iostream>
#include <string.h>
using namespace std;
class Student{
    protected:
        char name[20],branch[20],subjects[100];
        int rollno;
    public:
        virtual void get_data()=0;
        virtual void show()=0;
};
class Medicine:public Student{
    public:
        void get_data(){
            cout<<"\nEnter Student's Roll No.:";
            cin>>rollno;
            cout<<"\nEnter Student's name:";
            cin.ignore();
            cin.getline(name,20);
            cout<<"\nEnter Subjects chosen:";
            cin.ignore();
            cin.getline(subjects,100);
            strcpy(branch,"Medicine");            
        }
        void show(){
            cout<<"\nStudent Roll No.:"<<rollno;
            cout<<"\nStudent Name:"<<name;
            cout<<"\nBranch:"<<branch;
            cout<<"\nSubjects chosen:"<<subjects;
        }
};
class Engineering:public Student{
    public:
        void get_data(){
            cout<<"\nEnter Student's Roll No.:";
            cin>>rollno;
            cout<<"\nEnter Student's name:";
            cin.ignore();
            cin.getline(name,20);
            cout<<"\nEnter Subjects chosen:";
            cin.ignore();
            cin.getline(subjects,100);
            strcpy(branch,"Engineering");            
        }
        void show(){
            cout<<"\nStudent Roll No.:"<<rollno;
            cout<<"\nStudent Name:"<<name;
            cout<<"\nBranch:"<<branch;
            cout<<"\nSubjects chosen:"<<subjects;
        }
};
class Science:public Student{
    public:
        void get_data(){
            cout<<"\nEnter Student's Roll No.:";
            cin>>rollno;
            cout<<"\nEnter Student's name:";
            cin.ignore();
            cin.getline(name,20);
            cout<<"\nEnter Subjects chosen:";
            cin.ignore();
            cin.getline(subjects,100);
            strcpy(branch,"Science");            
        }
        void show(){
            cout<<"\nStudent Roll No.:"<<rollno;
            cout<<"\nStudent Name:"<<name;
            cout<<"\nBranch:"<<branch;
            cout<<"\nSubjects chosen:"<<subjects;
        }
};
int main(){
    Student *ob[3];
    Medicine ob1;
    Engineering ob2;
    Science ob3;
    ob[0]=&ob1;
    ob[1]=&ob2;
    ob[2]=&ob3;
    cout<<"\nEnter details of Medicine Student:";
    ob[0]->get_data();
    cout<<"\nEnter details of Engineering Student:";
    ob[1]->get_data();
    cout<<"\nEnter details of Science Student:";
    ob[2]->get_data();
    cout<<"\nObtained student data:\n";
    for(int i=0;i<3;i++){
        ob[i]->show();
        cout<<"\n";
    }
    return 0;
}
