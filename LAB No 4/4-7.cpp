# include<iostream>
using namespace std;
class SI{
    int P,T,R;
    public:
        void getvalue(){
            cout<<"Enter Principal Time and Rate:"<<endl;
            cin>>P>>T>>R;
        }
        void si(){
            float si=((P*T*R)/100);
            cout<<"SI = "<<si<<endl;
        }
};
main(){
    int n=2;
    SI ob[n];
    for(int i=1;i<=n;i++)
    {
        ob[i].getvalue();
        ob[i].si();
    }
}