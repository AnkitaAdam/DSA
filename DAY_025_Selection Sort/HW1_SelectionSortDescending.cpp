#include<iostream>
using namespace std;

int main(){
	int arr[]={7,3,1,99,2,0,55,33};
	int index=0;
	for(int i=0;i<8-1;i++){
		index=i;
		for(int j=i+1;j<8;j++){
			if(arr[j]>arr[index]){
				index=j;
			}
		}
		swap(arr[i],arr[index]);
	}
	
	cout<<"\nAscending order : \n";
	
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}
}