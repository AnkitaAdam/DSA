#include<iostream>
using namespace std;

int main(){
	
	int arr[]={4,-6,2,8};
	int sum=0;
	int largeSum=INT_MIN;
	for(int i=0;i<4;i++){
		for(int j=0;j<=i;j++){
			for(int k=j;k<=i;k++){
				sum+=arr[k];
			}
			if(sum>largeSum){
				largeSum=sum;
			}
			sum=0;
		}
	}
	cout<<"\nLargest sum from all continuous sub arrays : "<<largeSum;
}