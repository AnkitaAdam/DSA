//binary search in decreasing order sorted matrix //

#include<iostream>
using namespace std;

bool binary_search(int arr[][4],int n,int m,int key){
	int start=0;
	int end=(n*m)-1;
	
	while(start<=end){
		int mid=start+(end-start)/2;
		
		int row_index=mid/m;
		int col_index=mid%m;
		
		if(arr[row_index][col_index]==key){
			return true;
		}else if(arr[row_index][col_index]<key){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	return false;
}
int main(){
	
	int n=4;
	int m=4;
	
	int arr[4][4]={16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	
	cout<<"\nMatrix is : \n\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nEnter key : ";
	int key;
	cin>>key;
	
	cout<<binary_search(arr,n,m,key);
	
}