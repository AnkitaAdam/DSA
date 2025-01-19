//targetSum --> repetition is allowed

#include<iostream>
using namespace std;

//this code will repeat inself only..

//void findSum(int arr[],int index,int n,int sum,int target,int &count){
//	
//	if(index==n){
//		if(sum==target){
//			count+=1;
//		}
//		return;
//	}
//	
//	findSum(arr,index+1,n,sum,target,count);
//	findSum(arr,index,n,sum+arr[index],target,count);
//}


int findSum(int arr[],int index,int n,int target){
	if(target==0){
		return 1;
	}
	if(index==n || target<0){
		return 0;
	}
	
	return findSum(arr,index+1,n,target)+findSum(arr,index,n,target-arr[index]);
}
int main(){
	
	int arr[]={2,3,4};
	
	int target=6;
	
	cout<<findSum(arr,0,3,target);
}