//Given an array of size n, print all the sums possible from its subsequence.

//create subsequences of array --> like power set


#include<iostream>
#include<vector>

using namespace std;


void subsequence(int arr[],int index,int n,vector<int>&ans,int sum){
	if(index==n){
		ans.push_back(sum);
		return;
	}
	//not accept
	subsequence(arr,index+1,n,ans,sum);
	
	//accepted
	sum+=arr[index];
	subsequence(arr,index+1,n,ans,sum);
}
int main(){
	
	int arr[]={1,2,3};
	
	vector<int>ans;
	
	subsequence(arr,0,3,ans,0);
	
	for(auto a:ans){
		cout<<a<<"\n";
	}
}


//sc : n+1 == o(n)
//
//tc : 2^0 + 2^1 .... + 2^n
//    = 2 ^ (n+1) -1
//    = o(2^n)