//This program is for converting a binary number to Octal Number

//Steps to be followed : 
//1 -> convert the binary number into decimal
//2 -> convert the decimal number to octal number 


#include<iostream>
using namespace std;

int main(){
	cout<<"\nEnter the binary number : ";
	int binary=0;
	cin>>binary;
	int rem=0;
	int decimal=0;
	int mul=1;
	
	while(binary>0){
		rem=binary%10;
		decimal+=rem*mul;
		mul*=2;
		binary/=10;
	}
	cout<<"\nDecimal Equivalent = "<<decimal;
	rem=0;
	mul=1;
	int octal=0;
	while(decimal>0){
		rem=decimal%8;
		octal+=rem*mul;
		mul*=10;
		decimal/=8;
	}
	cout<<"\nOctal equivalent = "<<octal;
	
}

