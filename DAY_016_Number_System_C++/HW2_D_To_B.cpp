//Write a program to convert decimal numbers to binary numbers using a for loop.

#include<iostream>
using namespace std;

int main(){
	cout<<"\nEnter a decimal number : ";
	int decimal=0;
	cin>>decimal;
	
	int rem=0;
	int binary=0;
	int mul=1;
	
	for(int i=decimal;i>0;i=i/2){
		rem=i%2;
		binary+=rem*mul;
		mul*=10;
	}
	
	cout<<"Binary Equivalent : "<<binary;
}