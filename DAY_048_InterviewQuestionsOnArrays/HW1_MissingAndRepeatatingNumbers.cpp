class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        
        vector<int>flag(n);
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            flag[arr[i]-1]++;
        }
        
        for(int i=0;i<n;i++){
            if(flag[i]>1){
                ans.push_back(i+1);
            }
        }
        for(int i=0;i<n;i++){
            if(flag[i]==0){
                ans.push_back(i+1);
            }
        }
        
        return ans;
    }
};