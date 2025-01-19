#include<iostream>
using namespace std;

int binarysearch(int arr[],int target,int start,int end){
	
	if(start>end){
		return 0;
	}
	int mid=start+(end-start)/2;
	
	if(arr[mid]==target){
		return 1;
	}else if(target>arr[mid]){
		return binarysearch(arr,target,mid+1,end);
	}else{
		return binarysearch(arr,target,start,mid-1);
	}
}
int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	
	cout<<binarysearch(arr,32,0,9);
}