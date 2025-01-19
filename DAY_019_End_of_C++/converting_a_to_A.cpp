#include<iostream>
using namespace std;

void convert(char ch){
	int code=ch-32;
	cout<<(char)code;
}
int main(){
	cout<<"\nEnter a char : ";
	char ch;
	cin>>ch;
	
	convert(ch);
}