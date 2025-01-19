#include<iostream>
using namespace std;

int main(){
	int arr[]={4,-6,2,8};
	int n=4;
	
	int largeSum=INT_MIN;
	
	for(int i=0;i<n;i++){
		int prefixSum=0;
		for(int j=i;j<n;j++){
			prefixSum+=arr[j];
			largeSum=max(largeSum,prefixSum);
		}
		
	}
	cout<<"Largest subarray sum : "<<largeSum;
}