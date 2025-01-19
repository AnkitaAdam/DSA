// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int main() {
    // Write C++ code here
    vector<int>v;
    cout<<"initial size of vector :\n";
    cout<<v.size()<<" "<<v.capacity()<<"\n";
    cout<<"\nafter adding elements : \n";
    v.push_back(156);
    cout<<v.size()<<" "<<v.capacity()<<"\n";
    
    v.push_back(2);
    cout<<v.size()<<" "<<v.capacity()<<"\n";
    
    v.push_back(124);
    cout<<v.size()<<" "<<v.capacity()<<"\n";
    v.push_back(0);
    cout<<v.size()<<" "<<v.capacity()<<"\n";
    
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<"\n";
    
    cout<<"\niteration in vector : "<<"\n";
    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*it<<"\n";
    }
    
    sort(v.begin(),v.end());
    cout<<"\nVector in ascending order : \n";
    
    for(int i=0;i<v.size();i++){
    	cout<<v[i]<<"\n";
	}
	
	sort(v.begin(),v.end(),greater<int>());
	
	cout<<"\nVector in descending order : \n";
    
    for(int i=0;i<v.size();i++){
    	cout<<v[i]<<"\n";
	}
	
	vector<int>v1={1,2,3,4,5};
	
	cout<<"\nElements in vector v1 : \n";
    
    for(int i=0;i<v1.size();i++){
    	cout<<v1[i]<<"\n";
	}
	
	sort(v1.rbegin(),v1.rend());
	cout<<"\nVector v1 in descending order : \n";
    
    for(int i=0;i<v1.size();i++){
    	cout<<v1[i]<<"\n";
	}
	sort(v1.begin(),v1.end());
	cout<<"\nsearching 5 : \n"; //after sorting in descending order this could not work...
	cout<<binary_search(v1.begin(),v1.end(),5);
	cout<<"\n finding index : \n"
	cout<<find(v1.begin(),v1.end(),5)-v1.begin();
    return 0;
}