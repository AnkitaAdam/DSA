// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Print all numbers from 1 to n using recursion. 



void printNumbers(int num,int n){
    if(num==n){
        cout<<n<<"\n";
        return;
    }
    cout<<num<<"\n";
    printNumbers(num+1,n);
}

int main()
{
  cout<<"\nEnter n : ";
  int n;
  cin>>n;
  
  printNumbers(1,n);

}





