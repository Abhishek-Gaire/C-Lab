#include<iostream>
using namespace std;
class PU;
class TU {
    int rsrch;
    public:
        void getdata(){
            cout<<"Enter no of researchers:"<<endl;
            cin>>rsrch;
        }
        friend class PU;
        void showdifferences(PU); 
};
void TU ::showdifferences(PU b){
        cout<<"Differences= "<<b.phd-rsrch<<endl;
}   
class PU {
    int phd;
    public:
        void getdata(){
            cout<<"Enter no of phd students:"<<endl;
            cin>>phd;
        }
        friend class TU;
        void showtotal(TU ) ;
};
void PU :: showtotal(TU a){
    cout<<"Total= "<<phd+a.rsrch<<endl;
}    
main(){
    TU ob;
    PU ob1;
    ob.getdata();
    ob1.getdata();
    ob.showdifferences(ob1);
    ob1.showtotal(ob);
}