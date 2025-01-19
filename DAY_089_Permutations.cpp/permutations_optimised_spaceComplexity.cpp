#include<iostream>
#include<vector>
using namespace std;

void permute(vector<int>&arr,int index,int n,vector<vector<int>>&ans){
	
	if(index==n){
		ans.push_back(arr);
		return;
	}
	
	for(int i=index;i<arr.size();i++){
		
		swap(arr[i],arr[index]);
		permute(arr,index+1,n,ans);
		swap(arr[i],arr[index]);
	}
	
}


int main(){
	
	vector<int>arr={1,2,3};
	
	vector<vector<int>> ans;
	
	permute(arr,0,3,ans);
	
	for(auto a:ans){
		for(auto i:a){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	
	
}