#include<iostream>
using namespace std;
class Student{
	protected:
		int roll;
	public:
		void getRoll(){
			cout<<"Enter RollNo"<<endl;
			cin>>roll;
		}
};
class Marks{
	protected:
		int oop,pm,bc,acc,fin;
	public:
		void getMark1(int y){
			oop=y;
		}
		void getMark2(int y){
			pm=y;
		}void getMark3(int y){
			bc=y;
		}void getMark4(int y){
			acc=y;
		}
		void getMark5(int y){
			fin=y;
		}
};
class Result:public Student, public Marks{
	int total,per;
	public:
		void showTotal(){
			total=oop+pm+bc+acc+fin;
			cout<<"Total="<<total<<endl;
			cout<<"Percentage="<<total/5<<"%"<<endl;
		}
		void display(){
			cout<<"RollNo="<<roll<<endl;
			cout<<"Mark OOP="<<oop<<endl;
			cout<<"Mark PM="<<pm<<endl;
			cout<<"Mark BC="<<bc<<endl;
			cout<<"Mark ACC="<<acc<<endl;
			cout<<"Mark FIN="<<fin<<endl;
		}
};
main(){
	Result ob;
	ob.getRoll();
	ob.getMark1(49);
	ob.getMark2(89);
	ob.getMark3(99);
	ob.getMark4(47);
	ob.getMark5(89);
	ob.display();
	ob.showTotal();
}