//1: An array is given in decreasing order with Key, 
//Find the index of key, if key is not present, print -1;

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	
	while(start<=end){
		int mid=(start+((end-start)/2));
		
		if(arr[mid]==key){
			return mid;
		}else if(arr[mid]<key){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	return -1;
}
int main(){
	
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int n=10;
	
	int key;
	
	cout<<"\nEnter key : ";
	cin>>key;
	
	cout<<binarySearch(arr,n,key);	
}
