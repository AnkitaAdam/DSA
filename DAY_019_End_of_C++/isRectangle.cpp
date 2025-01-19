#include<iostream>
using namespace std;

bool isRectangle(int a,int b,int c,int d){
	if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
		return true;
	}
	return false;
}

int main(){
	cout<<"\nEnter four sides : ";
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<isRectangle(a,b,c,d);
}