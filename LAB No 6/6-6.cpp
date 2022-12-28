#include<iostream>
using namespace std;
class Vehicle{
    public:
        char name[25];
        virtual void display()=0;
};
class Car:public Vehicle{
    public:
        int model;
        void getModel(){
            cout<<"Enter Model No of car"<<endl;
            cin>>model;
        }
        void display(){
            cout<<"Model No="<<model<<endl;
        }
};
class Bus:public Vehicle{
    public:
        char name[25];
        int getName(){
            cout<<"Enter Name:"<<endl;
            cin>>name;
        }
        void display(){
            cout<<"Name:"<<name<<endl;
        }
};
main(){
    Car ob;
    Bus ob1;
    ob.getModel();
    ob1.getName();
    ob.display();
    ob1.display();
}