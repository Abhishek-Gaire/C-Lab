#include<iostream>
using namespace std;
// question aanusar xaaina haiii
class SI{
	float P,T,R,si;
	public:
		SI(int y){
			R=y;
			cout<<"Enter Principle and Time:"<<endl;
			cin>>P>>T;
			si=(P*T*R)/100;
			cout<<"Simple interst="<<si;
		}
};
main(){
	SI ob(6);
}
