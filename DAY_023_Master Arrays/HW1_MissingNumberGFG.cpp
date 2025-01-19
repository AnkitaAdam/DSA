//you are given an array arr[] of N integers. The task is to find the smallest positive number missing from the array.
//
//Note: Positive number starts from 1.
//
//Example 1:
//
//Input:
//N = 5
//arr[] = {1,2,3,4,5}
//Output: 6
//Explanation: Smallest positive missing 
//number is 6.

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
      int count=1;
        sort(arr,arr+n);   //sort the array by passing first and last ele addresses
        for(int i=0;i<n;i++){
            if(arr[i]<=0)
                arr[i]=0;
            else if(arr[i]>0 && arr[i]==count)
                count++;
        }
        return count;
    } 
};