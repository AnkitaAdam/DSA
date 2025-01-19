//print the sum of diagonal elements 

//1 2 3
//4 5 6
//7 8 9
//
//first = 1+5+9 => 15
//second = 3+5+7 => 15

#include<iostream>
using namespace std;

int main(){
	
	int row,col=0;
	cout<<"\nEnter row and column : ";
	cin>>row>>col;
	int arr[row][col];
	cout<<"\nEnter the array elements : ";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	
	int first=0;
	int second=0;
	
	for(int i=0;i<row;i++){
			first+=arr[i][i];
	}
	
	int i=0;
	int j=col-1;
	
	while(j>=0 && i<=row-1){
		second+=arr[i][j];
		i++;
		j--;
	}
	
	cout<<"\nFirst sum : "<<first<<"\nSecond sum : "<<second;
}