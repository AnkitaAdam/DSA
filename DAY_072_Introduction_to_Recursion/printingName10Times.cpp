#include <iostream>
using namespace std;


void print(string str,int n){
    if(n==1){
        cout<<str<<"\n";
        return;
    }
    cout<<str<<"\n";
    print(str,n-1);
}

int main()
{
  print("ankita",10);

}
