#include<iostream>
using namespace std;

void printArr(int arr[],int n,int index){
	if(index==n-1){
		cout<<arr[index]<<" ";
		return;
	}
	
	cout<<arr[index]<<" ";
	printArr(arr,n,index+1);
}

void reverseArr(int arr[],int index){
	if(index==-1){
		return ;
	}
	cout<<arr[index]<<" ";
	reverseArr(arr,index-1);
}
int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	
	int n=10;
	
	printArr(arr,n,0);
	cout<<"\nReverse array printing :\n";
	
	reverseArr(arr,9);
}