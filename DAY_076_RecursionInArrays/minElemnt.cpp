//find min element in array

#include<iostream>
using namespace std;

int minElement(int arr[],int index,int n){
	if(index==n-1){
		return arr[index];
	}
	return min(arr[index],minElement(arr,index+1,n));
	
}
int main(){
	
	int arr[]={111,22,88,44,5};
	
	cout<<minElement(arr,0,5);
}