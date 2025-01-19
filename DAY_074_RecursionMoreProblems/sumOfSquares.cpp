//sum of squares

#include<iostream>
using namespace std;

int sumOfSquares(int n){
	if(n==1)
		return 1;
	
	return n*n + sumOfSquares(n-1);
	
}

int main(){
	
	int n;
	cout<<"\nEnter n : ";
	cin>>n;
	
	cout<<sumOfSquares(n);
}