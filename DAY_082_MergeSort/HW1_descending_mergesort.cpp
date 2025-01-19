//apply merge sort to descending elements

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int end,int mid){
	
	int left=start;
	int right=mid+1;
	
	int index=0;
	
	vector<int>temp(end-start+1);
	
	while(left<=mid && right<=end){
		
		if(arr[left]>=arr[right]){
			temp[index]=arr[left];
			left++;
			index++;
		}else{
			temp[index]=arr[right];
			right++;
			index++;
		}
	}
	
	//if left remained
	while(left<=mid){
		temp[index]=arr[left];
		left++;
		index++;
	}
	
	//if right remained
	while(right<=end){
		temp[index]=arr[right];
		right++;
		index++;
	}
	
	//add temp vector eles to arr
	
	index=0;
	
	while(start<=end){
		arr[start]=temp[index];
		index++;
		start++;
	}
}
void mergeSort(int arr[],int start,int end){
	
	if(start==end){
		return;
	}
	
	int mid=start+(end-start)/2;
	
	mergeSort(arr,start,mid);
	mergeSort(arr,mid+1,end);
	
	merge(arr,start,end,mid);
	
}
int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	
	mergeSort(arr,0,9);
	
	
	cout<<"\narray after sortig : \n";
	
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
}


//sc: o(n)
//tc: o(n*logn)

