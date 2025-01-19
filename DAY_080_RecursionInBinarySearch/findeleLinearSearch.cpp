#include<iostream>
using namespace std;

bool findele(int arr[],int index,int x,int n){
	if(index==n){
		return false;
	}
	
	if(arr[index]==x){
		return true;
	}
	
	findele(arr,index+1,x,n);
}
int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	
	cout<<findele(arr,0,7,10);
}