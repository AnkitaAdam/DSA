#include<iostream>
using namespace std;

int main(){
	cout<<"\nEnter a decimal number : ";
	int num=0;
	cin>>num;
	
	int rem=0;
	int ans=0;
	int mul=1;
	
	while(num>0){
		rem=num%2;
		ans+=rem*mul;
		num/=2;
		mul*=10;
	}
	
	cout<<"\nBinary number : "<<ans;
	
	rem=0;
	int complement=0;
	int zero=0;
	int one=1;
	mul=1;
	
	while(ans!=0){
		rem=ans%10;
		if(rem==one){
			complement+=zero*mul;
		}else if(rem==zero){
			complement+=one*mul;
		}
		mul*=10;
		ans/=10;
	}
	
	cout<<"\nComplemented value : "<<complement;
	int decimal=0;
	rem=0;
	mul=1;
	
	while(complement!=0){
		rem=complement%10;
		decimal+=rem*mul;
		mul*=2;
		complement/=10;
	}
	
	cout<<"\nDecimal value : "<<decimal;
	
}