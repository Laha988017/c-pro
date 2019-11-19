#include <iostream>
using namespace std;
class shape{
	public:
		float whole_surface_area(){
			return 0;
		}
		float volume(){
			return 0;
		}
};
class box:public shape{
	float l,b,h;
	public:
		void get_data(){
			cout<<"\nEnter the length:";
			cin>>l;
			cout<<"\nEnter the breadth:";
			cin>>b;
			cout<<"\nEnter the height:";
			cin>>h;
		}
		float whole_surface_area(){
			return (2*((l*b)+(b*h)+(h*l)));
		}
		float volume(){
			return (l*b*h);
		}
};
class cube:public shape{
	float side;
	public:
		void get_data(){
			cout<<"\nEnter the side of cube:";
			cin>>side;
		}
		float whole_surface_area(){
			return (6*side*side);
		}
		float volume(){
			return (side*side*side);
		}
};
class cylinder:public shape{
	float rad,h;
	public:
		void get_data(){
			cout<<"\nEnter the radius of Cylinder:";
			cin>>rad;
			cout<<"\nEnter the height of Cylinder:";
			cin>>h;
		}
		float whole_surface_area(){
			return(2*3.14*rad*(rad+h));
		}
		float volume(){
			return (3.14*rad*rad*h);
		}
};
int main(){
	box b;
	cube cu;
	cylinder cy;
	b.get_data();
	cu.get_data();
	cy.get_data();
	cout<<"\nTotal Surface Area of Box is:"<<b.whole_surface_area();
	cout<<"\nVolume of Box is:"<<b.volume();
	cout<<"\nTotal Surface Area of Cube is:"<<cu.whole_surface_area();
        cout<<"\nVolume of Cube is:"<<cu.volume();
	cout<<"\nTotal Surface Area of Cylinder is:"<<cy.whole_surface_area();
        cout<<"\nVolume of Cylinder is:"<<cy.volume();
	return 0;
}


