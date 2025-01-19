class Solution
{
	public:
	
	    void permute(string &s,int index,int n,vector<string>&ans){
	        vector<bool>used(26,0);
	        if(index==n){
	            ans.push_back(s);
	            return;
	        }
	        
	        for(int i=index;i<n;i++){
	            if(used[s[i]-65]==0){
	                swap(s[i],s[index]);
	                permute(s,index+1,n,ans);
	                swap(s[i],s[index]);
	                used[s[i]-65]=2;
	            }
	           // swap(s[i],s[index]);
	           // permute(s,index+1,n,ans);
	           // swap(s[i],s[index]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    
		    vector<string>ans;
		    
		    permute(S,0,S.length(),ans);
		    
		    return ans;
		}
};