//Print “Hello Coder Army” n times using Function.

#include<iostream>
using namespace std;


void printNTimes(int n){
	for(int i=0;i<n;i++){
		cout<<"\nHello Coder Army";
	}
}
int main(){
	cout<<"\nEnter n : ";
	int n;
	cin>>n;
	printNTimes(n);
}