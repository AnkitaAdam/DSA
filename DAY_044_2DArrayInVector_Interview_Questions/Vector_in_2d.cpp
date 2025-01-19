//vector in 2d

#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<vector<int>>matrix(3,vector<int>(4,1));
	
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nrows = "<<matrix.size()<<"\ncols = "<<matrix[0].size();
}