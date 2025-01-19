#include<iostream>
using namespace std;


int countvowel(string s,int index){
	if(index==-1){
		return 0;
	}
	if(s[index]=='a' || s[index]=='e' || s[index]=='i' || s[index]=='o'||s[index]=='u'){
		return 1+ countvowel(s,index-1);
	}
	return countvowel(s,index-1);
	
}
int main(){
	
	
	string s="ankitaodem";
	
	cout<<countvowel(s,s.size()-1);
	
}