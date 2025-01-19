#include<iostream>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main(){
	int arr[]={3,1,4,2,7,2,0};
	int n=7;
	
	cout<<"\n\nBefore sorting : ";
	printArray(arr,n);
	
	for(int i=1;i<n;i++){
		for(int j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
			}else{
				break;
			}
		}
	}
	
	cout<<"\n\nAfter sorting : ";
	printArray(arr,n);
}