#include<iostream>
using namespace std;

//base class
class employee{
	public:
		int id;
		float salary;
		employee(int inpid){
			id = inpid;
			salary = 34.0;
		}
		employee(){
		}
};
class programmer : public employee{
	public:
		programmer(int inpid){
			id = inpid;
		}
		int languagecode = 9;
		void getdata(){
			cout<<id<<endl;
		}
};
int main(){
	employee harry(1), rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	programmer skillf(10);
	cout<<skillf.languagecode<<endl;
	skillf.getdata();
	return 0;
	
 	
}
