  //rotate array

#include<iostream>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5};
	int n=5;
	int last=arr[n-1];
	for(int i=n-2;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=last;
	
	cout<<"\nAfter rotating 1 time : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}