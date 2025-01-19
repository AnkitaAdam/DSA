//Write a recursive function to reverse the elements of an array.

#include<iostream>
using namespace std;

void reversearray(int (&arr)[10],int start,int end){
	if(start>end){
		return;
	}
	swap(arr[start],arr[end]);
	reversearray(arr,start+1,end-1);
}

int main(){
	
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	
	reversearray(arr,0,9);
	
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	
}