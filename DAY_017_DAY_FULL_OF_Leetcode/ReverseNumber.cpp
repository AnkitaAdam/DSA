#include<iostream>
using namespace std;


int main(){
	cout<<"\nEnter a number : ";
	int num;
	cin>>num;
	
	
	int ans=0;
	int rem=0;
	
	while(num!=0){
		rem=num%10;
		if(ans> INT_MAX/10 || ans< INT_MIN/10)
//			return 0;
			cout<<"0";
		ans=ans*10+rem;
		num/=10;
		
		
	}
	cout<<"\nReversed number : "<<ans;
}