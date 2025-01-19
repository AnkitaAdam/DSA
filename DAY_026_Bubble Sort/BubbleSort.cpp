#include<iostream>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]={8,7,5,4,2,55,1,4};
	int n=8;
	int swapped=0;
	cout<<"\nBefore sorting : \n\n";
	printArray(arr,n);
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<=i;j++){
			if(arr[j]>arr[j+1]){ //if large place it in last position
				swap(arr[j],arr[j+1]);
				swapped=1;
			}
		}
		if(swapped==0){
			break;
		}
	}
	cout<<"\n\nAfter sorting : \n\n";
	printArray(arr,n);
}




//Time Complexity:
//	
//Best case : O(n),omega(n);
//
//Worst Case : O(n^2);
//
//Avg Case : O(n^2), theeta(n^2)
//
//Space complexity:
//	
//	Auxilary space complexity : O(1);