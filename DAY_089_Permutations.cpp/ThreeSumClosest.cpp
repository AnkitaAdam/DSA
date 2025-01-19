
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        
       sort(arr.begin(),arr.end());
        // Your code goes here
        
        int maxSum=INT_MIN;
        int diff=INT_MAX;
        
        for(int i=0;i<arr.size()-2;i++){
            
            int a=target-arr[i];
            
            int start=i+1;
            int end=arr.size()-1;
            
            while(start<end){
                
            	int sum=arr[start]+arr[end]+arr[i];
            	
                if(arr[start]+arr[end]==a){
                    
                    return sum;
                }
				else if(arr[start]+arr[end]<a){
                    start++;
                }else{
                    end--;
                }
                
                if(abs(sum-target)<diff){
                    diff=abs(sum-target);
                    maxSum=sum;
                }
                else if(abs(sum-target)==diff){
                    maxSum=max(maxSum,sum);
                }
            }
        }
        
        return maxSum;
    }
};
int main(){
	cout<<threeSumClosest({2,5,5,7},13);
}