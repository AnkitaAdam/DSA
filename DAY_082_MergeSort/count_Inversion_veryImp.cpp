class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    void merge(long long arr[],int start,int end,int mid,long long &count){
        
        int left=start;
        int right=mid+1;
        int index=0;
        vector<long long>temp(end-start+1);
        
        while(left<=mid && right<=end){
            
            if(arr[left]<=arr[right]){
                temp[index]=arr[left];
                left++;index++;
            }else{
                temp[index]=arr[right];
                
                count+=(mid-left+1); //important 
                right++;index++;
                
            }
            
        }
        
        //remined ele add to temp
        
        while(left<=mid){
            temp[index]=arr[left];
            left++;
            index++;
        }
        
        //add remained ele to temp
        
        while(right<=end){
            temp[index]=arr[right];
            right++;
            index++;
        }
        
        //add temp to arr
        
        index=0;
        
        for(int i=start;i<=end;i++){
            arr[i]=temp[index];
            index++;
            
        }
        
    }
    
    void mergeSort(long long arr[],int start,int end,long long &count){
        
        if(start==end){
            return;
        }
        
        int mid=start+(end-start)/2;
        
        //divide left part
        mergeSort(arr,start,mid,count);
        
        //divide in right part
        mergeSort(arr,mid+1,end,count);
        
        //merge them
        
        merge(arr,start,end,mid,count);
    }
    
    long long int inversionCount(long long arr[], int n) {
        // Your Code Here
        long long count=0;
        
        mergeSort(arr,0,n-1,count);
        return count;
        
    }
};