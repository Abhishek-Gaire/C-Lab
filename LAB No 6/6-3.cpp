#include<iostream>
using namespace std;
class Student{
	protected:
		int roll;
	public:
		void setRoll(){
			cout<<"Enter Rollno:"<<endl;
			cin>>roll;
		}
};
class Test:public Student{
	protected:
		int sub1,sub2;
	public:
		void getMarks(){
			cout<<"Enter two marks:"<<endl;
			cin>>sub1>>sub2;
		}
};
class Result:public Test{
	public:
		int total;
		void display(){
			total=sub1+sub2;
			cout<<"RollNo="<<roll<<endl;
			cout<<"Mark1="<<sub1<<endl;
			cout<<"Mark2="<<sub2<<endl;
			cout<<"Total Marks="<<total<<endl;
		}
};
main(){
	Result ob;
	ob.setRoll();
	ob.getMarks();
	ob.display();
}