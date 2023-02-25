#include<iostream>
using namespace std;
template <class t>
void sum(t a, t b){
	t s;
	s=a+b;
	cout<<"Sum="<<s<<endl;
}
main(){
	float a,b;
	int c,d;
	cout<<"For integers:"<<endl;
	sum(5,50);
	cout<<"For Floating Numbers:"<<endl;
	sum(12.87,23.67);
	return 0;
}
