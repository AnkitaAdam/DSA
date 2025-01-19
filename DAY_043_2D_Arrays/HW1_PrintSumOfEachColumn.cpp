//print sum of each column

//1 2 3
//4 5 6
//7 8 9
//======== plus
//12 15 18

#include<iostream>
using namespace std;

int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<3;j++){
			sum+=arr[j][i];
		}
		cout<<i<<" th row sum is : "<<sum<<"\n";
	}
}
