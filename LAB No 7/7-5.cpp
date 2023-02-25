#include<iostream>
#include<math.h>
using namespace std;
class Rectangular{
	int x,y;
	public:
		Rectangular(){
		}	
		Rectangular(float p, float q){
			x=p;
			y=q;
		}
		void display(){
			cout<<"(x,y)="<<"("<<x<<","<<y<<")"<<endl;
		}
};
class Polar{
	float R,A;
	public:
		Polar(){
		}
		Polar(float r,float s){
			R=r;
			A=s;
		}
		void display(){
			cout<<"("<<R<<","<<A<<")"<<endl;
		}

		operator Rectangular(){
			float x,y;
			x=R*cos(A);
			y=R*sin(A);
			return Rectangular(x,y);
		}
};
main(){
	Rectangular r;
	Polar p(70.0,0.785);
	r=p;
	cout<<"Polar coordinate is:"<<endl;
	p.display();
	cout<<"Rectangular coordinate is:"<<endl;
	r.display();
}