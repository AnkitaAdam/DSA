//2: Given a Matrix of size n*m (n=rows and m= cols). Reverse each column of the matrix.
//
//Example:
//1 2 3          7 8 9
//4 5 6    ?     4 5 6
//7 8 9          1 2 3


#include<iostream>
#include<vector>
using namespace std;

void printMatrix(vector<vector<int>>&matrix,int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void reverseCols(vector<vector<int>>&matrix,int row,int col){
	
	for(int j=0;j<col;j++){
		int start=0;
		int end=row-1;
		
		while(start<end){
			swap(matrix[start][j],matrix[end][j]);
			start++;
			end--;
		}
	}
}
int main(){
	
	int row,col;
	cout<<"\nEnter row and col : ";
	cin>>row>>col;
	vector<vector<int>>matrix(row,vector<int>(col));
	
	cout<<"\nEnter matrix elements : ";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>matrix[i][j];
		}
	}
	
	cout<<"\nBefore reversing : \n\n";
	printMatrix(matrix,row,col);
	
	reverseCols(matrix,row,col);
	
	cout<<"\nAfter reversing : \n\n";
	printMatrix(matrix,row,col);
}