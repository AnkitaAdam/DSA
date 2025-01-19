//power of a number

#include<iostream>
using namespace std;

int powerOfNumber(int n,int power){
	
	if(power==1){
		return n*power;
	}
	
	return n * powerOfNumber(n,power-1);
}
int main(){
	int n;
	int power;
	
	cout<<"\nEnter number and power : ";
	cin>>n>>power;
	
	cout<<powerOfNumber(n,power);
}