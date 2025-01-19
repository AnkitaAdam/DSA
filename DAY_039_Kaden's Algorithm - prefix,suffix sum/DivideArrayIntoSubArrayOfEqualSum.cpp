#include<iostream>
#include<vector>
using namespace std;

bool divide(vector<int>&v, int n){
	int prefix=0;
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=v[i];
	}
	
	for(int i=0;i<v.size()-1;i++){
		prefix+=v[i];
		int ans=sum-prefix;
		if(ans==prefix){
			return true;
		}
	}
	return false;
}
int main(){
	int n=0;
	cout<<"\nEnter the size of vector : ";
	cin>>n;
	
	vector<int> v(n);
	cout<<"\nEnter vector elements : \n\n";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	cout<<"ans - "<<divide(v,n);
	return 0;
}
	