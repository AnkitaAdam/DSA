//Print all numbers from 10 to n using recursion, where n will be greater than 10.


#include<iostream>
using namespace std;

void printNumbers(int num,int n){
	if(num==n){
		cout<<num<<" ";
		return;
	}
	cout<<num<<" ";
	printNumbers(num+1,n);
}

int main(){
	
	cout<<"\nEnter n : ";
	int n;
	cin>>n;
	
	printNumbers(10,n);
}