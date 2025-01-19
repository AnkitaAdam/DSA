#include<iostream>
using namespace std;
int main(){
	int arr[]={3,1,4,2,7,2,0};
	int n=7;
	
	for(int i=n-2;i>=n-4;i--){
		for(int j=0;j<=i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	
	cout<<"\nfirst  largest no : "<<arr[n-1];
	cout<<"\nsecond largest no : "<<arr[n-2];
	cout<<"\nthird largest no : "<<arr[n-3];
	
}