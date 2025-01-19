//Insertion Sort Algorithm to sort the array of integers in
// increasing order if we start from the last element of the array.
//  Question was explained in the class.


#include<iostream>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}


int main(){
	
	int arr[]={0,-1,22,223,1,2,99,-8,0,222};
	int n=10;
	cout<<"\n\nBefore sorting : ";
	printArray(arr,n);
	for(int i=n-2;i>=0;i--){
		for(int j=i;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout<<"\n\nAfter sorting : ";
	printArray(arr,n);
	
}