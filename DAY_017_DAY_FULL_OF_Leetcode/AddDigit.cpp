#include<iostream>
using namespace std;

int main(){
	cout<<"\nEnter a number : ";
	int num=0;
	cin>>num;
	

	while(num>9){
		int ans=0;
		int rem=0;
		while(num!=0){
			rem=num%10;
			ans+=rem;
			num/=10;
		}
		num=ans;
	}
	cout<<"\nOne digit number : "<<num;
	return 0;
}