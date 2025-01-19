//find max element from array

#include<iostream>
using namespace std;

int findMax(int arr[],int index,int n){
	
	if(index==n-1){
		return arr[index];
	}
	
	return max(arr[index],findMax(arr,index+1,n));
}
int main(){
	int arr[]={11,75557,333,555,33};
	
	cout<<findMax(arr,0,5);
}