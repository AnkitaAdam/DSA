//Given an array in non-increasing order, an element is given X, 
//find if that element is present in the array or not. print 1 if 
//its present else print 0.


#include<iostream>
using namespace std;

int binarysearch(int arr[],int start,int end,int target){
	
	if(start>end){
		return 0;
	}
	int mid=start+(end-start)/2;
	
	if(arr[mid]==target){
		return 1;
	}else if(target>arr[mid]){
		binarysearch(arr,start,mid-1,target);
	}else{
		binarysearch(arr,mid+1,end,target);
	}
}
int main(){
	
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	
	cout<<binarysearch(arr,0,10,12);
	
}

