//Write a program to convert binary numbers to decimal numbers using a for loop.
#include<iostream>
using namespace std;

int main(){
	cout<<"Enter a binary number : ";
	int binary=0;
	cin>>binary;
	
	int rem=0;
	int decimal=0;
	int mul=1;
	
	for(int i=binary;i>0;i=i/10){
		rem=i%10;
		decimal+=rem*mul;
		mul*=2;
	}
	cout<<"Decimal equivalent : "<<decimal;
}