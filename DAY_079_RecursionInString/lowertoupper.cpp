#include<iostream>
using namespace std;


void lowertoupper(string &s,int index){
	if(index==-1){
		return;
	}
	s[index]='A'+s[index]-'a';
	lowertoupper(s,index-1);
}

int main(){
	
	
	string s="ankitaadam";
	
	lowertoupper(s,s.size()-1);
	cout<<s;
	
}