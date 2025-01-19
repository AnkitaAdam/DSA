//This program is for converting a octal number to binary number 

//steps to be followed : 
//1 -> convert the octal number to decimal first
//2 -> convert the decimal number to octal number 

#include<iostream>
using namespace std;

int main(){
	cout<<"Enter octal number : ";
	int octal=0;
	cin>>octal;
	
	int rem=0;
	int decimal=0;
	int mul=1;
	
	while(octal>0){
		rem=octal%10;
		decimal+=rem*mul;
		mul*=8;
		octal/=10;
		
	}
	cout<<"Decimal Equivalent : "<<decimal;
	rem=0;
	int binary;
	mul=1;
	while(decimal>0){
		rem=decimal%2;
		binary+=rem*mul;
		mul*=10;
		decimal/=2;
	}
	cout<<"\nBinary Equivalent : "<<binary;
}