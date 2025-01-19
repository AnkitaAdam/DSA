#include<iostream>
using namespace std;

int main(){
	
	int arr[]={9,5,8,12,2,3,7,4};
	int n=8;
	int ans=INT_MIN;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			ans=max(ans,arr[j]-arr[i]);
		}
	}
	cout<<"Max difference between 2 element : "<<ans;
}