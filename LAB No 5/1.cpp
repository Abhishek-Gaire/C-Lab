// question aanusar xaaina haiii
#include<iostream>
using namespace std;

class Add{
	int a,b,c;
	public:
		Add(int m, int n){
			a=m;
			b=n;
		}
		Add(int m, int n, int o){
			a=m;
			b=n;
			c=o;
		}
		int ShowAdd(){
			return a+b;
		}
		int showadd(){
			return a+b+c;
		}
};
main(){
	Add ob1(8,9), ob2(8,9,5);
	cout<<"Sum of two integers="<<ob1.ShowAdd()<<endl;
	cout<<"Sum of three integers="<<ob2.showadd()<<endl;
}
