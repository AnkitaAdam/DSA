//find the product of all eles in array

#include<iostream>
using namespace std;


int printProduct(int arr[],int index,int n){
	
	if(index==n-1){
		return arr[index];
	}
	return arr[index]*printProduct(arr,index+1,n);
}
int main(){
	
	int arr[]={1,2,3,4,5};
	
    cout<<printProduct(arr,0,5);
	
}