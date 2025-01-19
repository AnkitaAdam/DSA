#include<iostream>
#include<vector>

using namespace std;

void permute(int index,int n,vector<int>&arr,vector<vector<int>>&ans){
	
	vector<bool>use(21,0);
	if(index==n){
		ans.push_back(arr);
		return;
	}
	
	for(int i=index;i<n;i++){
		if(use[arr[i]+10]==0){
			swap(arr[i],arr[index]);
			permute(index+1,n,arr,ans);
			swap(arr[i],arr[index]);
			use[arr[i]+10]=1;
		}
		
	}
	
}
int main(){
	
	vector<int>arr={1,1,2,2};
	
	
	vector<vector<int>>ans;
	permute(0,arr.size(),arr,ans);
	
	for(auto i:ans){
		for(auto a:i){
			cout<<a<<" ";
		}
		cout<<"\n";
	}
}