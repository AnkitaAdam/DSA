#include<iostream>
using namespace std;

int main(){
	
	int arr[]={9,5,8,12,2,3,7,4};
	int n=8;
	int sufix[n];
	sufix[n-1]=arr[n-1];
	int ans=INT_MIN;
	for(int i=n-2;i>=0;i--){
		sufix[i]=max(sufix[i+1],arr[i]);
		ans=max(ans,sufix[i+1]-arr[i]);
	}
	cout<<"Max Difference : "<<ans;
}