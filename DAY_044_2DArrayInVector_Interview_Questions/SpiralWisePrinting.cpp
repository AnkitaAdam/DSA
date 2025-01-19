//printing inspiral form 


//1 2 3 4 
//2 3 4 5
//3 4 5 6
//4 5 6 7
//====>  1 2 3 4 5 6 7 6 5 4 3 2 3 4 5 4
#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int row=0,col=0;
	
	cout<<"\nenter row and col : ";
	cin>>row>>col;
	
	vector<vector<int>>matrix(row,vector<int>(col));
	cout<<"\nEnter vector elements : ";
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>matrix[i][j];
		}
	}
	
	
	int top=0;
	int right=col-1;
	int bottom=row-1;
	int left=0;
	
	while(left<=right && top<=bottom){
		
		for(int i=left;i<=right;i++){
			cout<<matrix[top][i]<<" ";
		}
		top++;
		for(int i=top;i<=bottom;i++){
			cout<<matrix[i][right]<<" ";
		}
		right--;
		if(top<=bottom){
			for(int i=right;i>=left;i--){
				cout<<matrix[bottom][i]<<" ";
			}
		}
		bottom--;
		if(left<=right){
			for(int i=bottom;i>=top;i--){
				cout<<matrix[i][left]<<" ";
			}
		}
		left++;
	}
}