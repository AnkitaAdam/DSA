//Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest 
//number to first place by starting from the last. Question was explained in the class.

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
	
	for(int i=1;i<=n-1;i++){
		for(int j=n-1;j>=i;j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
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
