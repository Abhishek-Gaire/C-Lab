#include<iostream>
#include<math.h>
using namespace std;
class Polar{
	public:
		double R,A;
		Polar(){
		};
		Polar(double a,double b){
			R=a;
			A=b;
		}
		void show(){
			cout<<"In Polar Form:"<<endl;
			cout<<"Radius="<<R<<"and Angle="<<A<<endl;
		}
};
class Rectangular{
	double x,y;
	public:
		Rectangular(){
		};
		Rectangular(Polar r){
			x=r.R*cos(r.A);
			y=r.R*sin(r.A);
		}
		void show(){
			cout<<"In Rectangular Form:"<<endl;
			cout<<"x="<<x<<"and y="<<y<<endl;
		}
};
main(){
	Polar p(70,0.785);
	p.show();
	Rectangular r;
	r=p;
	r.show();
}