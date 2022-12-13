#include<iostream>
using namespace std;
class Compare{
    int n1,n2;
    public:
        void getvalue() {
            cout<<"Enter two numbers:"<<endl;
            cin>>n1>>n2;
        }
        friend void compare(Compare); 
};
void compare(Compare b) {
    if (b.n1>b.n2)
    cout<<b.n1<<" is greater.";
    else
    cout<<b.n2<<" is greater.";
}
main() {
    Compare ob;
    ob.getvalue();
    compare(ob);
}