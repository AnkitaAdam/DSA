//1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.


#include<iostream>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int arr[]={1,7,4,22,123,24,0,32,-4,23};
	int n=10;
	bool swapped=0;
	
	cout<<"\nBefore Sorting : ";
	printArray(arr,n);
	
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<=i;j++){
			if(arr[j]<arr[j+1]){ //if small place it in last position
				swap(arr[j],arr[j+1]);
				swapped=1;
			}
		}
		if(swapped==0){
			break;
		}
	}
	cout<<"\n\nAfter Sorting : ";
	printArray(arr,n);
}