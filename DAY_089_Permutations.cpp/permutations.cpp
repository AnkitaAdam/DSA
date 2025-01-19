#include<iostream>
#include<vector>
using namespace std;

void permute(vector<int>&arr,vector<bool>&visited,vector<int>&temp,vector<vector<int>>&ans,int n){
	
	if(temp.size()==arr.size()){
		ans.push_back(temp);
		return;
	}
	
	for(int i=0;i<arr.size();i++){
		if(visited[i]==0){
			visited[i]=1;
			temp.push_back(arr[i]);
			permute(arr,visited,temp,ans,n);
			visited[i]=0;
			temp.pop_back();
		}
	}
}

int main(){
	
	vector<int>arr={1,2,3};
	int n=3;
	vector<bool>visited(n,0);
	vector<int>temp;
	vector<vector<int>>ans;
	
	
	permute(arr,visited,temp,ans,n);
	
	cout<<"\nPermutations : \n\n";
	for(auto i:ans){
		for(auto j:i){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	
}