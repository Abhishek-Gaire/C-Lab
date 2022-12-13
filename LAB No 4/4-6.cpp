#include<iostream>
using namespace std;
class MahendraHighway;
class PrithiviHighway{
    int km,mtr;
    public:
        void getlength(){
            cout<<"Enter length of Prithivi Highway in km and m:"<<endl;
            cin>>km>>mtr;
        }
        inline friend void showtotal(PrithiviHighway,MahendraHighway);
};
class MahendraHighway{
    int km1,mtr1;
    public:
        void getlength1(){
            cout<<"Enter length of Mahendra Highway in km and m:"<<endl;
            cin>>km1>>mtr1;
        }
        inline friend void showtotal(PrithiviHighway, MahendraHighway);
};
void showtotal(PrithiviHighway a, MahendraHighway b) {
    int km2,mtr2;
    km2=a.km+b.km1;
    mtr2=a.mtr+b.mtr1;
    cout<<"Total = "<<km2<<" Kilometer and "<<mtr2<<" meter"<<endl;
}
main(){
    PrithiviHighway ob;
    MahendraHighway ob1;
    ob.getlength();
    ob1.getlength1();
    showtotal(ob,ob1);
}