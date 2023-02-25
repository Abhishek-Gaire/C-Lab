#include<iostream>
using namespace std;
class Height{
	float meter;
	public:
		Height(){
			meter=0;
		}
		Height(float a,float b){
			float sum;
			sum=(a+b/12);
			meter=(sum/3.28082);
		}
		void showMeter(){
			cout<<"Height in meter:"<<meter<<endl;
		}
};
main(){
	Height h;
	float feet,inches;
	cout<<"Enter height in feet and inches:"<<endl;
	cin>>feet>>inches;
	h=Height(feet,inches);
	h.showMeter();
	return 0;
}