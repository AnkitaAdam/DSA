//Given a Number N, check whether it is prime or not using Recursion

#include<iostream>
using namespace std;

bool checkPrime(int n,int divisor){
	if(divisor<=1){
		return true;
	}
	
	if(n%divisor==0){
		return false;
	}else{
		return checkPrime(n,divisor-1);
	}
}
int main(){
	
	int n;
	cout<<"\nEnter number : ";
	cin>>n;
	
	cout<<checkPrime(n,n-1);
}