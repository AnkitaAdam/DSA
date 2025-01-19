// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Print all odd number from n to 1 using recursion


void printOddNumbers(int n){
    if(n==1){
        cout<<n<<"\n";
        return;
    }
    cout<<n<<"\n";
    printOddNumbers(n-2);
}

int main()
{
  cout<<"\nEnter n : ";
  int n;
  cin>>n;
  if(n%2==0)
    n+=1;
  
  printOddNumbers(n);

}





