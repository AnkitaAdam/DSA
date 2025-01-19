//
//1: Use Insertion Sort Algorithm to sort the array of integers 
//in decreasing order.

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
	for(int i=1;i<n;i++){
		for(int j=i;j>0;j--){
			if(arr[j]>arr[j-1]){
				swap(arr[j],arr[j-1]);
			}
		}
	}
	cout<<"\n\nAfter sorting : ";
	printArray(arr,n);

}