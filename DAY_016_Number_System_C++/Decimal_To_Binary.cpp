#include<iostream>
using namespace std;

int main(){
	cout<<"Enter a decimal number : ";
	int num=0;
	cin>>num;
	int rem=0;
	int ans=0;
	int mul=1;
	while(num>0){
//		rem=num&1;
		rem=num%2;
		ans+=rem*mul;
//		num/=2;
		num=num>>1;
		mul*=10;
	}
	cout<<"Binary equivivalent : "<<ans;
	return 0;
}
    