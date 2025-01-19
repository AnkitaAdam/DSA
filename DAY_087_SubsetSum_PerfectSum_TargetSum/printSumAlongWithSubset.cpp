//print sum of subsets along with subset

#include<iostream>
#include<vector>
using namespace std;


void calcSum(int arr[],int index,int n,vector<int>&sums,int sum,vector<int>&temp,vector<vector<int>>&ans){
	
	if(index==n){
		sums.push_back(sum);
		ans.push_back(temp);
		return;
	}
	
	calcSum(arr,index+1,n,sums,sum,temp,ans);
	temp.push_back(arr[index]);
	calcSum(arr,index+1,n,sums,sum+arr[index],temp,ans);
	temp.pop_back();
}

int main(){
	int arr[]={1,2,3};
	
	vector<int>sums;
	vector<int>temp;
	vector<vector<int>>ans;
	
	calcSum(arr,0,3,sums,0,temp,ans);
	int i=0;
	
	for(auto a:ans){
		cout<<sums[i]<<" --> { ";
		for(auto i:a){
			cout<<i<<" ";
		}
		cout<<"} \n";
		i++;
	}
}