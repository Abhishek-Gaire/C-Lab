#include<iostream>
using namespace std;
class Room{
	protected:
		int len,brd;
	public:
		int area(){
			return len*brd;
		}
};
class Bedroom: public Room{
	protected:
		int hght;
	public:
		void setData(int l, int b, int h){
			len=l;
			brd=b;
			hght=h;
		}
		int volume(){
			return len*brd*hght;
		}
};
main(){
	Bedroom ob;
	ob.setData(9,8,7);
	cout<<"Area="<<ob.area()<<endl;
	cout<<"Volume="<<ob.volume()<<endl;
}