#include<iostream>
using namespace std;

int main(){
	int arr[]={-7,9,5,88,77,1};
	int ans=INT_MIN;
	int secondMax=INT_MIN;
	for(int i=0;i<6;i++){
		if(arr[i]>ans){
			ans=arr[i];
		}
	}
	for(int i=0;i<6;i++){
		if(arr[i]!=ans){
			secondMax=max(arr[i],secondMax);
		}
	}
	
	cout<<"\nSecond largest : "<<secondMax;
}