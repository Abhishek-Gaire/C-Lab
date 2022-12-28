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
		void showRoll(){
			cout<<"RollNo="<<roll<<endl;
		}
};
class Practical:virtual public Student{
	protected:
		int markP;
	public:
		void getMark(int y){
			markP=y;
		}
		void showMark(){
			cout<<"Practical Mark="<<markP<<endl;
		}
};
class Theory:virtual public Student{
	protected:
		int markT;
	public:
		void getMarks(int z){
			markT=z;
		}
		void showMarks(){
			cout<<"Theory Mark="<<markT<<endl;
		}
};
class Result:public Theory, public Practical{
	int total;
	public:
		void showTotal(){
			total=markP+markT;
			cout<<"Total="<<total<<endl;
		}
};
main(){
	Result ob;
	ob.getRoll();
	ob.getMark(49);
	ob.getMarks(98);
	ob.showRoll();
	ob.showMarks();
	ob.showMark();
	ob.showTotal();
}