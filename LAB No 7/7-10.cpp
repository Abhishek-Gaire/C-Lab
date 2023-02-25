#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int i,num[5]={1,2,3,4,5};
	int a,b,c;
	cout<<"ENter two numbers:"<<endl;
	cin>>a>>b;
	cout<<"Enter the array index to display the data:"<<endl;
	cin>>i;
	try{
		if(b==0)
			throw"Divide by zero not possible";
		else{
			c=a/b;
			cout<<"Results="<<c<<endl;
		}
		if (i>4)
			throw 505;
		else{
			cout<<"Number="<<num[i]<<endl;
		}
	}
	catch(const char* e1){
		cout<<e1;
	}
	catch(int x){
		cout<<"Error No:"<<x<<endl;
		cout<<"Exception due to array index out of range"<<endl;
	}
}
