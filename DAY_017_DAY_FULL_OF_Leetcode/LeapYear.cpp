#include<iostream>
using namespace std;

int main(){
	cout<<"\nEnter a year : ";
	int year=0;
	cin>>year;
	
	if(year%400==0 || (year%4==0 || year%100==0)){
		cout<<"leap year..";
		
	}else 
		cout<<"\n not a leap year";
}