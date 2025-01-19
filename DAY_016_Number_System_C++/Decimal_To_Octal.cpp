#include<iostream>
using namespace std;

int main(){
	
	cout<<"Enter a decimal number :";
	int num=0;
	cin>>num;
	int rem=0;
	int ans=0;
	int mul=1;
	
	while(num>0){
		rem=num%8;
		ans+=rem*mul;
		num/=8;
		mul*=10;
		
	}
	cout<<"Octal equvivalent : "<<ans;
	return 0;
	
}