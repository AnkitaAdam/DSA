//merge sort,,

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int end,int mid){
	
	vector<int>temp(end-start+1);
	
	int left=start;
	int right=mid+1;
	int index=0;
	
	while(left<=mid && right<=end){
		if(arr[left]<=arr[right]){
			temp[index]=arr[left];
			left++;
			index++;
		}else{
			temp[index]=arr[right];
			right++;
			index++;
		}
	}
		
		//add left sub array remained elements
		while(left<=mid){
			temp[index]=arr[left];
			left++;
			index++;
		}
		
		//add right sub array remained elements
		while(right<=end){
			temp[index]=arr[right];
			right++;
			index++;
		}
		
		//add all elements from temp vector to original array
		
		index=0;
		while(start<=end){
			arr[start]=temp[index];
			start++;
			index++;
		}
}

void mergeSort(int arr[],int start,int end){
	if(start==end)
		return;
	
	int mid=start+(end-start)/2;
	
	mergeSort(arr,start,mid);
	mergeSort(arr,mid+1,end);
	
	merge(arr,start,end,mid);
	
}
int main(){
	int arr[]={-2,3,-5};
	
	cout<<"\nBefore sorting : \n";
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}
	
	mergeSort(arr,0,2);
	
	cout<<"\nAfter sorting : \n";
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}
}