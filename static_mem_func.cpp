#include<iostream>
using namespace std;
class Id_Generator{
	static int next_id;
	public:
		static int Generate(){
			cout<<"next id is:"<<next_id++<<"\n";
		}
};
int Id_Generator::next_id=1;
int main(){
	for(int i=0;i<5;i++)
		Id_Generator:: Generate();
	return 0;
}
