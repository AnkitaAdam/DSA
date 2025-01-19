
//1 2 3
//4 5 6  => 1 4 7 8 5 2 3 6 9  print in wave form 
//7 8 9


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
	cout<<"\n\nVector in wave format : \n\n";
	
	for(int j=0;j<col;j++){
		if(j%2==0){
			for(int i=0;i<row;i++){
				cout<<matrix[i][j]<<" ";
			}
		}else{
			
			for(int i=row-1;i>=0;i--){
				cout<<matrix[i][j]<<" ";
			}
		}
	}
}