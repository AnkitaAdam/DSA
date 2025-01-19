//Sum of cubes of N natural numbers using Recursion.


#include<iostream>
using namespace std;

int sumOfCubes(int n){
	if(n==1)
		return 1;
	return n*n*n + sumOfCubes(n-1);
}
int main(){
	
	int n;
	
	cout<<"\nEnter n: ";
	cin>>n;
	
	cout<<sumOfCubes(n);
}


//1^3 + 2^3 + 3^3 + 4^3 
//1 + 8 + 27 + 64
//100