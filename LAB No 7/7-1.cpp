#include<iostream>
using namespace std;
class Test{
	int a,b;
	public:
		void getdata(){
			cout<<"Enter any two integers:"<<endl;
			cin>>a>>b;
		}
		void operator++(){
			++a;
			++b;
		}
		Test operator--(int){
			Test t;
			a--;
			b--;
			t.a=a;
			t.b=b;
			return t;
		}
		void display(){
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};
main(){
	Test ob1,ob2;
	ob1.getdata();
	cout<<"After operator ++ overloading:"<<endl;
	++ob1;
	ob1.display();
	ob2.getdata();
	cout<<"After operator -- overloading:"<<endl;
	ob2=ob2--;
	ob2.display();
}