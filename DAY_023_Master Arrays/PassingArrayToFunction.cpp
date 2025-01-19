#include<iostream>
using namespace std;

void fun(int a[],int n){
	cout<<"\nsizeof of a pointer = "<<sizeof(a)<<endl; //prints 8 because a is pointer that points to the array address not a array
//														8 is because i have 8 gb ram that means 64 bit processor so 8 byte address it contains.
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int arr[5]={1,2,3,4,5};
	cout<<"\nsizeoff arr array = "<<sizeof(arr); //arr is actual array so it gives total array size..
	int n=5;
	fun(arr,n);
}