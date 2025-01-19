//Print all odd numbers from 1 to n using recursion.

#include<iostream>
using namespace std;

void printOdd(int n){
	if(n==1){
		cout<<1<<" ";
		return;
	}
	
	printOdd(n-2);
	cout<<n<<" ";
}
int main(){
	
	int n;
	cout<<"\nEnter n : ";
	cin>>n;
	
	if(n%2==0)
		n-=1;
		
	printOdd(n);
	
}