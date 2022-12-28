#include<iostream>
using namespace std;
class Shape{
	protected:
		float base;
	public:
		void getBase(float x){
			base=x;
		}
		Shape(){
			base=0;
		}
};
class Triangle:public Shape{
	float height,area;
	public:
		void getHeight(float h){
			height=h;
		}
		void showArea(){
			area=((base*height)/2);
			cout<<"Area of triangle="<<area<<endl;
		}
};
class Rectangle: public Shape{
	int length;
	public:
		void getLength(int l){
			length=l;
		}
		void showArea(){
			cout<<"Area of Rectangle="<<length*base<<endl;
		}
};
main(){
	Rectangle ob;
	Triangle ob1;
	ob.getBase(9);
	ob.getLength(15);
	ob.showArea();
	ob1.getBase(16);
	ob1.getHeight(7);

	ob1.showArea();
}