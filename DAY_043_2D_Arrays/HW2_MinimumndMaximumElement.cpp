#include<iostream>
using namespace std;

int main(){
	
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	int mini=INT_MAX;
	int maxi=INT_MIN;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			mini=min(mini,arr[i][j]);
			maxi=max(maxi,arr[i][j]);
		}
	}
	
	cout<<"\nMaximum element : "<<maxi;
	cout<<"\nMinimum element : "<<mini;
}