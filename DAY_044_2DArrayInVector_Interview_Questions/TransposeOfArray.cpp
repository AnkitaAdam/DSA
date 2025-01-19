#include<iostream>
using namespace std;

int main(){
	
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;i++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	
	cout<<"\nTranspose of array : \n\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;i++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}