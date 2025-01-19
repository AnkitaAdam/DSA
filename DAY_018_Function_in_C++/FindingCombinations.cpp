//finding combinations


//formula :  n! / r! * (n – r)!

#include<iostream>
using namespace std;

int factorial(int n){
	if(n==0)
		return 0;
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}

long combination(int n,int r){
	long ans;
	ans= (factorial(n))/(factorial(r) * factorial(n-r));
	return ans;
}

int main(){
	cout<<"Enter n and r : ";
	int n,r;
	cin>>n>>r;
	
	cout<<"nCr = "<<combination(n,r);
}