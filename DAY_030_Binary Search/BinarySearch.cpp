#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	
	while(start<=end){
		int mid=(start+end)/2;
		
		if(arr[mid]==key){
			return mid;
			break;
		}else if(arr[mid]<key){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	return -1;
}
int main(){
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int n=10;
	int key;
	
	cout<<"\nEnter key : ";
	cin>>key;
	
	cout<<binarySearch(arr,n,key);
}