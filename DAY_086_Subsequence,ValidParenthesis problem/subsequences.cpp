//create subsequences of array --> like power set


#include<iostream>
#include<vector>

using namespace std;


void subsequence(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>&temp){
	if(index==n){
		ans.push_back(temp);
		return;
	}
	//not accept
	subsequence(arr,index+1,n,ans,temp);
	
	//accepted
	temp.push_back(arr[index]);
	subsequence(arr,index+1,n,ans,temp);
	temp.pop_back();
}
int main(){
	
	int arr[]={1,2,3};
	
	vector<vector<int>>ans;
	vector<int>temp;
	
	subsequence(arr,0,3,ans,temp);
	
	for(auto a:ans){
		for(auto i:a){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}