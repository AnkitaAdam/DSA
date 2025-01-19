//1: Find the cube of a number using Function. 


#include<iostream>
using namespace std;

int cubeOfNumber(int n){
	return n*n*n;
}
int main(){
	cout<<"\nEnter a number : ";
	int num=0;
	cin>>num;
	cout<<"\nCube of "<<num<<" is : "<<cubeOfNumber(num);
}