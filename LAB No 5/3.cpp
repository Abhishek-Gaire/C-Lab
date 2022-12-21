#include<iostream>
// question aanusar xaaina haiii
using namespace std;
class Copy{
	int n1,n2;
	public:
		Copy(){
			cout<<"Enter two number:"<<endl;
			cin>>n1>>n2;
		}
		Copy(Copy &d ){
			n1=d.n1+10;
			n2=d.n2+20;
		}
		void showAdd(){
			cout<<"Addition="<<n1+n2<<endl;
		}
};
main(){
	Copy ob1;
	ob1.showAdd();
	Copy ob(ob1);
	ob.showAdd();
}