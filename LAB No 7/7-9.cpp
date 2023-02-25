#include<iostream>
using namespace std;
template <class t>
void Calculate(t a , t b){
	t s;
	t m;
	s=(a+b)/2;
	m=a*b;
	cout<<"Average="<<s<<endl;
	cout<<"Multiplication="<<m<<endl;
}
main(){
	int a,b;
	Calculate(15.99,68.0);
	return 0;
}