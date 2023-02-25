#include<iostream>
#include<math.h>
using namespace std;
class Complex{
	public:
		int real,img;
		void getdata(){
			cout<<"Enter real and imaginary part of complex number:"<<endl;
			cin>>real>>img;
		}
		Complex operator +(Complex c){
			Complex t;
			t.real=real+c.real;
			t.img=img+c.img;
			return t;
		}
		void display(){
			cout<<real<<"+ i"<<img<<endl;
		}
};
main(){
	Complex c,c1,c2;
	c.getdata();
	c1.getdata();
	c2=c+c1;
	cout<<"Sum=";c2.display();
}