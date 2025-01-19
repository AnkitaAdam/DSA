//There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

#include<iostream>
using namespace std;

void interchange(int &a,int &b,int &c){
	int temp=b;
	int temp1=c;
	b=a;
	c=temp;
	a=temp1;	
}
int main(){
	cout<<"\nEnter a,b,c : ";
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"\nBefore exchanging : \n";
	cout<<"a = "<<a<<" b = "<<b<<" c = "<<c;
	interchange(a,b,c);
	cout<<"\nAfter exchanging : \n";
	cout<<"a = "<<a<<" b = "<<b<<" c = "<<c;
}