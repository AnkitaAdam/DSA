//sum of elements of array

#include<iostream>
using namespace std;

int printSum(int arr[],int n,int index){
	
	if(index==n){
		return 0;
	}
	
	return arr[index]+printSum(arr,n,index+1);
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	
	cout<<printSum(arr,10,0);
}