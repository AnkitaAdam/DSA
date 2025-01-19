//2: Reverse a number n using Function, Constraints: -5000<=n<=5000

#include<iostream>
using namespace std;


int reverseNumber(int n){
	int rev=0;
	while(n!=0){
		rev=rev*10+(n%10);
		n/=10;
	}
	return rev;
}

int main(){
	cout<<"\nEnter a number : ";
	int num=0;
	cin>>num;
	cout<<"\nReverse number of "<<num<<" is : "<<reverseNumber(num);
}