//Bubble Sort Algorithm to sort the array of char in ascending order

#include<iostream>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<(char)arr[i]<<" ";
	}
}

int main(){
	
	
	int arr[]={'a','n','k','i','t','a'};
	int n=6;
	bool swapped=0;
	cout<<"\nBefore Sorting : ";
	printArray(arr,n);
		
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<=i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=1;
			}
		}
		if(swapped==0){
			break;
		}
	}
	cout<<"\nAfter Sorting : ";
	printArray(arr,n);
}