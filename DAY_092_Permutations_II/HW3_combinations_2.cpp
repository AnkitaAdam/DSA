class Solution {
public:

    void findCandidates(vector<int>&arr,int index, int n,vector<vector<int>>&ans,int target,vector<int>&temp){

        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }

        

        for(int i=index;i<n;i++){
            if(index!=i && arr[i-1]==arr[i])
                continue;

                temp.push_back(arr[i]);
                findCandidates(arr,i+1,n,ans,target-arr[i],temp);
                temp.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        findCandidates(candidates,0,candidates.size(),ans,target,temp);
        return ans;
    }
};.