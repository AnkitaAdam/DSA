//Given a String, count the number of consonants in it.
#include<iostream>
using namespace std;


int countconsonent(string s,int index){
	if(index==-1){
		return 0;
	}
	if(s[index]!='a' && s[index]!='e' && s[index]!='i' && s[index]!='o'&&s[index]!='u'){
		return 1+countconsonent(s,index-1);
	}
	return countconsonent(s,index-1);
	
}
int main(){
	
	
	string s="sdfghjklg";
	
	cout<<countconsonent(s,s.size()-1);
	
}