#include<iostream>
using namespace std;

int main(){
	
	int row,col=0;
	cout<<"\nEnter row and column : ";
	cin>>row>>col;
	int arr[50][50];
	cout<<"\nEnter the array elements : ";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	
	int i=0;
	int j=col-1;
	int sum=0;
	
	
	while(j>=0 && i<=row-1){
		if(i==j){
			sum+=arr[i][j];
		}else{
			sum+=(arr[i][i]+arr[i][j]);
			
		}
		i++;
		j--;
		
	}
	
	cout<<"\nSum excluding intersection is : "<<sum;
	
}