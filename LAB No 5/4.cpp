#include<iostream>
using namespace std;
// question aanusar xaaina haiii
class Rectangle{
	int ln,br;
	public:
		void Area(){
			cout<<"Area="<<ln*br<<endl;
		}
		Rectangle(){
			ln=0,br=0;
			Area();
		}
		Rectangle(int m, int n){
			ln=m;
			br=n;
			Area();
		}
		Rectangle(int m){
			ln=m;
			br=m;
			Area();
		}
		
};
main(){
	Rectangle ob(),ob1(5,6),ob2(9);
}