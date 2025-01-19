//give tle

class Solution{

	public:
	
	void findSum(int arr[],int index,int n,int sum,int target,int &count){
	    
	    if(index==n){
	        if(sum==target){
	            count+=1;
	        }
	        return;
	    }
	    
	    findSum(arr,index+1,n,sum,target,count);
	    findSum(arr,index+1,n,sum+arr[index],target,count);
	    
	}
	int perfectSum(int arr[], int n, int target)
	{
        // Your code goes here
        
        int count=0;
        
        findSum(arr,0,n,0,target,count);
        
        return count%10000000007;
	}
	  
};