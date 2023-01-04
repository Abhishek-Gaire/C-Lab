#include<iostream>
using namespace std;
class Staff{
    public:
        char name[20],address[20],post[20];
        Staff(){

        }
        virtual void showHrs()=0;
        void getdata(){
            cout<<"Enter name, address and post in class Staff:"<<endl;
            cin>>name>>address>>post;
        }
        void showData(){
            cout<<"Name="<<name<<endl;
            cout<<"Address="<<address<<endl;
            cout<<"Post="<<post<<endl;
        }
};
class NonTeaching:virtual public Staff{
    public:
        NonTeaching(){

        }
};
class Teaching:virtual public Staff{
    public:
        char dept[20];
        Teaching(){

        }
        void getDept(){
            cout<<"Enter department of Teaching Staff:"<<endl;
            cin>>dept;
        }
        void showDept(){
            cout<<"Department="<<dept<<endl;
        }
};
class Admin:public NonTeaching, public Teaching{
    public:
        int workingHrs;
        Admin(){

        }
        void getHrs(){
            cout<<"Enter working hours of class Admin:"<<endl;
            cin>>workingHrs;
        }
        void showHrs(){
            cout<<"Working Hrs="<<workingHrs<<endl;
        }
};
main(){
    Admin ob;
    ob.getdata();
    ob.getDept();
    ob.getHrs();
    ob.showData();
    ob.showDept();
    ob.showHrs();
}