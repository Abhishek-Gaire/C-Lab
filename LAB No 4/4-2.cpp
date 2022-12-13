#include<iostream>
using namespace std;
class GCES;
class PEC{
    int num;
    public:
        void getstudents(){
            cout<<"Enter no of students for PEC:"<<endl;
            cin>>num;
        }
        friend void compare(GCES,PEC);
};
class GCES{
    int num1;
    public:
        void getstudents(){
            cout<<"Enter no of students for GCES:"<<endl;
            cin>>num1;
        }
        friend void compare(GCES,PEC);
};
void compare (GCES b, PEC a){
    if(b.num1>a.num)
    cout<<"Class GCES has greater no of students.";
    else 
    cout<<"Class PEC has greater no of students.";
}
main() {
    GCES ob;
    PEC ob1;
    ob.getstudents();
    ob1.getstudents();
    compare(ob,ob1);
}