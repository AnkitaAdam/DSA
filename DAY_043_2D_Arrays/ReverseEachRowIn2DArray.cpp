//reverse each row of matrix 

//1 2 3        3 2 1
//4 5 6  ==>   6 5 4
//7 8 9        9 8 7

#include<iostream>
using namespace std;

int main(){
	
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	cout<<"\nBefore reversing : \n\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int i=0;i<3;i++){
		int start=0;
		int end=3-1;
		
		while(start<end){
			swap(arr[i][start],arr[i][end]);
			start++;
			end--;
		}
	}
	
	cout<<"\nAfter reversing : \n\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}