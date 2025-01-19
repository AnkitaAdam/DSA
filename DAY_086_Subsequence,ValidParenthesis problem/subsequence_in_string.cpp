//create subsequences from a string..

#include<iostream>
#include<vector>
using namespace std;

void subsequence(string &str,int index,int n,vector<string>&ans,string &temp){
	
	if(index==n){
		ans.push_back(temp);
		return;
	}
	
	//don't accept char
	subsequence(str,index+1,n,ans,temp);
	
	//accept char
	temp.push_back(str[index]);
	subsequence(str,index+1,n,ans,temp);
	temp.pop_back();
	
}
int main(){
	
	string str="abc";
	vector<string>ans;
	string temp;
	
	subsequence(str,0,3,ans,temp);
	
	for(auto a:ans){
		cout<<a<<endl;
	}
}