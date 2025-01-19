#include<iostream>
using namespace std;

int main(){
	cout<<"Enter a binary number : ";
	int num=0;
	cin>>num;
	
	int rem=0;
	int ans=0;
	int mul=1;
	
	while(num>0){
		rem=num%10;
		ans+=rem*mul;
		mul*=2;
		num/=10;
	}
	cout<<"\nDecimal equivalent : "<<ans;
	
}