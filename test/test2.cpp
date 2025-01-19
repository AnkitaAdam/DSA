#include<iostream>
#include<vector>
using namespace std;



int findMax(int first,int second,vector<int>&v){
	
	int maxi=INT_MIN;
	
	for(int i=first;i<second;i++){
		maxi=max(maxi,v[i]);
	}
	return maxi;
}
int count(int first,int second){
	int cnt=0;
	for(int i=first;i<second;i++){
		cnt++;
	}
	return cnt;
}

void processArray(){
	vector<int>v;
	vector<int>ans;
	int index=0;
	int n;
	
	while(true){
		cin>>n;
		if(n<0){
			break;
		}
		v.push_back(n);
	}
	
	int first=0;
	int second=0;
	
	while(first<v.size()&&second<v.size()){
		
		if(v[first]%2==0){
//			ans.push_back(v[first]);
			v[index++]=v[first];
			first++;
		}else{
			second=first;
			while(second<v.size() && v[second]%2!=0){
				second++;
			}
		}
		
		if(count(first,second)>=2){
//			ans.push_back(findMax(first,second,v));
			v[index++]=findMax(first,second,v);
			first=second;
		}
	}
	
	while(first<v.size()){
//		ans.push_back(v[first]);
		v[index++]=v[first];
		first++;
	}
	
	cout<<"\nAnswer : \n\n";
	
	for(int i=0;i<index;i++){
		cout<<v[i]<<"\n";
	}
}
int main(){
	
	processArray();
}

//13
//3
//33
//62
//122
//63
//65
//39
//662
//9
//-1
