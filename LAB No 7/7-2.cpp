#include<iostream>
using namespace std;
class Multiply{
	int a;
	public:
		void getdata(){
			cout<<"Enter the value of a:"<<endl;
			cin>>a;
		}
		Multiply operator*(Multiply c){
			Multiply t;
			a=a*c.a;
			t.a=a;
			return t;
		}
		void display(){
			cout<<"Multiplication="<<a<<endl;
		}
};
main(){
	Multiply a,b;
	a.getdata();
	b.getdata();
	a*b;
	cout<<"After operator * overloading"<<endl;
	a.display();
}