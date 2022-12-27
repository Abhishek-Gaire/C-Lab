#include<iostream>
using namespace std;
class class1{
	public:
		int num1;
		void setData(int a){
			num1=a;
		}
};
class class2{
	public:
		int num2;
		void setData1(int b){
			num2=b;
		}
};
class class3:public class1, public class2{
	public:
		void showTotal(){
			cout<<"Sum of two numbers="<<num1+num2<<endl;
		}
};
main(){
	class3 ob;
	ob.setData(48);
	ob.setData1(42);
	ob.showTotal();
}