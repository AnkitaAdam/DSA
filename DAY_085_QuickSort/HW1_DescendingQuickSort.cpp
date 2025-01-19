//apply quick sort for descending the array elements 

#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
	
	int pos=start;
	
	for(int i=start;i<=end;i++){
		
		if(arr[i]>=arr[end]){
			swap(arr[pos],arr[i]);
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
	
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	
	quicksort(arr,0,9);
	
	cout<<"\nAfter sorting : \n";
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	
}



//tc (avg case): o(n*logn)
//but
//tc (worst case):o(n^2) -- becuase not every time partition gets into exactly n/2 halves


//Best and Average Case: O(log n)
//Worst Case: O(n)