//print sum of subsets

#include<iostream>
#include<vector>
using namespace std;


void calcSum(int arr[],int index,int n,vector<int>&sums,int sum){
	
	if(index==n){
		sums.push_back(sum);
		return;
	}
	
	calcSum(arr,index+1,n,sums,sum);
	calcSum(arr,index+1,n,sums,sum+arr[index]);
}

int main(){
	int arr[]={1,2,3};
	
	vector<int>sums;
	
	calcSum(arr,0,3,sums,0);
	
	for(int i=0;i<sums.size();i++){
		cout<<sums[i]<<endl;
	}
}