#include<iostream>
using namespace std;

void rotatearray(int (&arr)[10],int index,int ele){
	if(index==-1){
		arr[index+1]=ele;
		return;
	}
	arr[index+1]=arr[index];
	rotatearray(arr,index-1,ele);
}

int main(){
	
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	
	rotatearray(arr,8,arr[9]);
	
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	
}