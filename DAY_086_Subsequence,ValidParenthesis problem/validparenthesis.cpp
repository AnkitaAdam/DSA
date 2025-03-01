//check valid parenthesis

#include<iostream>
#include<vector>
using namespace std;

void validparenthesis(int n,int left,int right,vector<string>&ans,string &temp){
	
	if(left+right == 2*n){
		ans.push_back(temp);
		return;
	}
	
	//take left parenthesis
	
	if(left<n){
		temp.push_back('(');
		validparenthesis(n,left+1,right,ans,temp);
		temp.pop_back();
		
	}
	
	if(right<left){
		temp.push_back(')');
		validparenthesis(n,left,right+1,ans,temp);
		temp.pop_back();
	}
	
}
int main(){
	
	int n=3;
	vector<string>ans;
	string temp;
	
	validparenthesis(n,0,0,ans,temp);
	
	
	for(auto a:ans){
		cout<<a<<endl;
	}
}