#include<iostream>
using namespace std;
template <class t>
void swap(t a, t b){
	t s;
	s=a;
	a=b;
	b=s;
	cout<<"After swapping:"<<endl;
	cout<<"First Number="<<a<<" Second Number="<<b<<endl;
}
main(){
	int a,b;
	float c,d;
	swap(5,6);
	swap(4.9,5.09);
	return 0;
}