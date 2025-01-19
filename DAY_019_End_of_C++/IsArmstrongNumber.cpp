#include<iostream>
#include<math.h>
using namespace std;

int countDigits(int num){
	int cnt=0;
	while(num){
		num%10;
		cnt+=1;
		num/=10;
	}
	return cnt;
}
int isArmstrong(int a)
{
	int digits=countDigits(a);
	int n=a;
	int ans=0;
	int rem=0;
	int mul=1;
	while(a){
		rem=a%10;
		ans+=pow(rem,digits);
		a/=10;
	}
	
	if(ans==n)
		return 1;
	return 0;
}

int main(){
	cout<<"\nEnter a number : ";
	int num;
	cin>>num;
	cout<<"\nans : "<<isArmstrong(num);
}