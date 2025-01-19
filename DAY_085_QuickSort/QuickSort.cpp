
#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
	int pos=start;
	
	for(int i=start;i<=end;i++){
		if(arr[i]<=arr[end]){
			swap(arr[i],arr[pos]); //arr[end] is an pivot here..
			pos++;
		}
	}
	
	return pos-1;
	
}
void quicksort(int arr[],int start,int end){
	
	if(start>end){
		return;
	}
	
	int pivot=partition(arr,start,end);
	quicksort(arr,start,pivot-1);
	quicksort(arr,pivot+1,end);
	
}
int main(){
	
	int arr[]={9,8,7,6,5,4,3,2,1};
	
	quicksort(arr,0,8);
	
	
	cout<<"\nAfter sorting : \n";
	
	for(int i=0;i<9;i++){
		cout<<arr[i]<<" ";
	}
	
}