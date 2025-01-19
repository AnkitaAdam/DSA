#include<iostream>
#include<vector>
using namespace std;


void perfectSum(int arr[],int index,int n,int sum,int target,vector<vector<int>>&ans,vector<int>&temp,int &count){
    if(index==n){
        if(sum==target){
            count+=1;
            ans.push_back(temp);
        }
        return;
    }

    

    perfectSum(arr,index+1,n,sum,target,ans,temp,count);
    temp.push_back(arr[index]);
    perfectSum(arr,index+1,n,sum+=arr[index],target,ans,temp,count);
    temp.pop_back();

}
int main(){
    int arr[]={0,1};

    int count=0;
    int target=1;

    vector<vector<int > >ans;
    vector<int>temp;

    perfectSum(arr,0,2,0,target,ans,temp,count);

    cout<<"count == "<<count;

    cout<<"\nPairs with target sum : \n\n";

    for(auto a:ans){
        for(auto i:a){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

}