//class Solution{
//  public:		
//	int lps(string s) {
//	    // Your code goes here
//	    
//	    vector<int>lps(s.size(),0);
//	    
//	    int prefix=0;
//	    int sufix=1;
//	    
//	    while(sufix<s.size()){
//	        
//	        if(s[prefix]==s[sufix]){
//	            lps[sufix]=prefix+1;
//	            prefix++;
//	            sufix++;
//	        }else{
//	            if(prefix==0){
//	                lps[sufix]=0;
//	                sufix++;
//	            }else{
//	                prefix=lps[prefix-1];
//	            }
//	        }
//	    }
//	    
//	    return lps[s.size()-1];
//	}
//};


//#include<iostream>
//using namespace std;
//
//int processArray(){
//      int n;
//      int index=0;
//      int arr[1000];
//      while(true){
//          cin>>n;
//          if(n<0){
//                break;
//          }
//          arr[index]=n;
//          index++;
//      }
//     
//     for(int i=index-1;i>=0;i--){
//          if(arr[i]%2!=0){
//                  cout<<arr[i];
//                  break;
//          }
//     }
//}
//
//int main(){
//     processArray();
//}



#include<iostream>
#include<vector>
using namespace std;


int findMin(int first,int second,vector<int>&v){
int maxi=INT_MIN;
   for(int i=first;i<second;i++){
       maxi=max(maxi,v[i]);
   }
  return maxi;
}

int count(int first,int second){
int cnt=0;
 for(int i=first;i<=second;i++){
   cnt++;
}
return cnt;
}
void processArray(){
vector<int>v;
int n;

while(true){
cin>>n;
if(n<0){
break;
}
v.push_back(n);
}

int first=0;
int second=1;
int i=0;
while(second<v.size()){
   if(v[first]%2==0){
       v[i]=v[first];
       first++;
       i++;
       if(v[second]%2==0){
            v[i]=v[second];
           second++;
            i++;
        }
   }else{
      while(v[second]%2!=0){
            second++;
      }
      

   }
if(count(first,second) >=2){
	cout<<findMin(first,second,v)<<"==\n";
      v[i]=findMin(first,second,v);
      i++;
        first=second+1;
    second=first+1;
}

 
}

for(int j=0;j<i;j++){
  cout<<v[j]<<"\n";
}
}

int main(){
   processArray();
}