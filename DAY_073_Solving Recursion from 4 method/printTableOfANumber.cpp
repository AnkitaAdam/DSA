//Write a Table program using recursion. Take input number n, and print its table. 

#include<iostream>
using namespace std;


void printTable(int n,int i){
	
	if(i==10){
		cout<<n*i<<" ";
		return;
	}
	
	cout<<n*i<<" ";
	printTable(n,i+1);	
}
int main(){
	
	cout<<"\nEnter table number : ";
	int n;
	cin>>n;
	
	printTable(n,1);
}
