//fibonacii series in array

//0 1 1 2 3 5 8 13

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"\nEnter which fibonacci number u want ? ";
	cin>>n;
	
	int arr[1000];
	
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<n;i++){
		arr[i]=arr[i-1]+arr[i-2];
		
	}
	
	cout<<"\nNth fibonacci no is : "<<arr[n-1];
}