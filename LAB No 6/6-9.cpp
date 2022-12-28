#include<iostream>
using namespace std;
class employee{
	public:
		int id,salary;
		char name[25];
		void getName(){
			cout<<"Enter Employers Name:"<<endl;
			cin>>name;
		}
		void getID(){
			cout<<"Enter EID and Salary:"<<endl;
			cin>>id>>salary;
		}
};
class Company{
	char name[30],loc[30];
	public:
		employee E;
		void getData(){
			cout<<"Enter company name and its location:"<<endl;
			cin>>name>>loc;
		}
		void display(){
			cout<<"Company Name="<<name<<endl;
			cout<<"Company Location="<<loc<<endl;
			cout<<"Name="<<E.name<<endl;
			cout<<"EID="<<E.id<<endl;
			cout<<"Salary="<<E.salary<<endl;
		}
};
main(){
	Company ob;
	ob.E.getName();
	ob.E.getID();
	ob.getData();
	ob.display();
}