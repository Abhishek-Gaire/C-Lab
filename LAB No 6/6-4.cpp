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
class Test:public Student{
	protected:
		int mark1,mark2;
	public:
		void getMarks(){
			cout<<"Enter two marks:"<<endl;
			cin>>mark1>>mark2;
		}
		void showMarks(){
			cout<<"Mark1="<<mark1<<endl;
			cout<<"Mark2="<<mark2<<endl;
		}
};
class Sport{
	protected:
		int score;
	public:
		void getScore(){
			cout<<"Enter score"<<endl;
			cin>>score;
		}
		void showScore(){
			cout<<"Score in Sports:"<<score<<endl;
		}
};
class Result:public Test, public Sport{
	int total;
	public:
		void showTotal(){
			total=mark1+mark2+score;
			cout<<"Total="<<total<<endl;
		}
};
main(){
	Result ob;
	ob.getRoll();
	ob.getMarks();
	ob.getScore();
	ob.showRoll();
	ob.showMarks();
	ob.showScore();
	ob.showTotal();
}