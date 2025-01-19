#include<iostream>
using namespace std;

int main(){
	int arr[]={4,-6,2,8};
	int n=4;
	int prefixSum=0;
	int largeSum=0;
	
	for(int i=0;i<n;i++){
		prefixSum+=arr[i];
		largeSum=max(prefixSum,largeSum);
		if(prefixSum<0){
			prefixSum=0; //this is kadane's algorthim rule
		}
	}
	cout<<"largest subarray sum is : "<<largeSum;
}