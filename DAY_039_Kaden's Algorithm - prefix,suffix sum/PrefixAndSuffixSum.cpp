//prefix sum and suffix sum:

//
//if the array is : 2 3 4 5 6 7 8 9 
//
//prefix sum: 2 5 9 14 20 27 35 44
//
//suffix sum:44 42 39 35 30 24 17 9

#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int>v={2,3,4,5,6,7,8,9};
	vector<int>prefixSum(8);
	prefixSum[0]=v[0];
	for(int i=1;i<8;i++){
		prefixSum[i]=prefixSum[i-1]+v[i];
	}
	
	cout<<"\nPrefix sum array : ";
	
	for(int i=0;i<8;i++){
		cout<<prefixSum[i]<<" ";
	}
	
	vector<int>sufixSum(8);
	sufixSum[8-1]=v[8-1];
	for(int i=8-2;i>=0;i--){
		sufixSum[i]=sufixSum[i+1]+v[i];
	}
	
	cout<<"\nSufix sum array : ";
	
	for(int i=0;i<8;i++){
		cout<<sufixSum[i]<<" ";
	}
	
	
	
}