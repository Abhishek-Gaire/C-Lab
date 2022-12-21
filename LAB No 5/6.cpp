#include<iostream>
// question aanusar xaaina haiii
using namespace std;
class Area{
	public:
	void calculateArea(int l){
		cout<<"Area of Square="<<l*l<<endl;
	}
	void calculateArea(int l, int b){
		cout<<"Area of Rectangle="<<l*b;
	}
};
main(){
	Area ob;
	ob.calculateArea(4);
	ob.calculateArea(9,8);
}