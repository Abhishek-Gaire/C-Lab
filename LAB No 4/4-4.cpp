#include<iostream>
using namespace std;
class DM;
class DB {
    int ft,inch;
    public:
        void getvalues(){
            cout<<"Enter in feets and inches:"<<endl;
            cin>>ft>>inch;
        }
        friend void add (DM, DB);
};
class DM{
    int m,cm;
    public:
        void getvalue() {
            cout<<"Enter in meters and centimeters:"<<endl;
            cin>>m>>cm;
        }
        friend void add (DM, DB);
};
void add (DM b, DB a){
    float Sm,sm;
    Sm=(((b.m)*3.28084)+a.ft);
    sm=(((b.cm)*0.393701)+a.inch);
    cout<<"Sum of meter and feet in feet is "<<Sm<<endl;
    cout<<"Sum of centimeter and inch in inch is "<<sm;
}
main(){
    DM ob;
    DB ob1;
    ob.getvalue();
    ob1.getvalues();
    add(ob,ob1);
}