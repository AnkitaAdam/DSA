//find the no of even eleements in array

#include <iostream>
using namespace std;

void findEvens(int &count,int arr[],int index,int n){
	
	if(index==n){
		return;
	}
	
	if(arr[index]%2==0)
		count+=1;
    findEvens(count,arr,index+1,n);
}

int main(){
	
	int arr[]={2,3,4,5,6,7,8,10,12,18};
	
	int count=0;
	
	
	findEvens(count,arr,0,10);
	
	cout<<count;
}