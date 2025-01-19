//Swap 2 numbers a, b without using extra variables. Range of 
//-10000<=a,b<=100000. 

#include<iostream>
using namespace std;

void swapTwo(int &a,int &b){
	a=b+a;
	b=a-b;
	a=a-b;
	
}

int main(){
	cout<<"\nEnter a,b : ";
	int a,b,c;
	cin>>a>>b;
	cout<<"\nBefore exchanging : \n";
	cout<<"a = "<<a<<" b = "<<b;
	swapTwo(a,b);
	cout<<"\nAfter exchanging : \n";
	cout<<"a = "<<a<<" b = "<<b;
}
