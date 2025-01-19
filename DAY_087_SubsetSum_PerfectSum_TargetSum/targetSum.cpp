//target sum

#include<iostream>
using namespace std;

bool findTargetSum(int arr[],int index,int n,int target){
	if(target==0){
		return 1;
	}
	
	if(index==n || target<=-1){
		return 0;
	} 
	
	return findTargetSum(arr,index+1,n,target) + findTargetSum(arr,index+1,n,target-arr[index]);
	
}
int main(){
	
	int arr[]={1,2,3,4,5};
	
	int target=6;
	
	cout<<findTargetSum(arr,0,5,target);
	
	
	
	
}