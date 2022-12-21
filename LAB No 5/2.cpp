#include<iostream>
// question aanusar xaaina haiii
using namespace std;
class AddAmount{
	int amount=50;
	public:
		AddAmount(){
			amount=amount+0;
			cout<<"Amount="<<amount<<endl;
		}
		AddAmount(int a){
			amount=amount+a;
			cout<<"Amount="<<amount<<endl;
		}
};
main(){
	AddAmount ob1(900);
}