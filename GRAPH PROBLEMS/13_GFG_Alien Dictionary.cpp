class Solution {
  public:
    
    string findOrder(vector<string> &words,int k) {
        // code here
        
        int n = words.size();
        
        
        vector<int> adj[k];
        vector<int>inDegree(k,0);
        
        for(int i=0; i<n-1; i++ ){
            
            string str1 = words[i];
            string str2 = words[i+1];
            
            int j=0,k=0;
            
            while(j<str1.length() && k<str2.length()){
                
                j++;k++;
            }
            
            if(j == str1.size())
                continue;
            
            
            adj[str1[j] - 'a'].push_back(str2[k] - 'a');
            inDegree[str2[k] - 'a']++;
            
        }
        
        queue<int> qu;
        string ans;
        
        for(int i=0;i<k;i++){
            if(!inDegree[i]){
                qu.push(i);
            }
        }
        
        while(! qu.empty()){
            
            int node = qu.front();
            ans += ('a' + node);
            qu.pop();
            
            for(int i=0; i<adj[node].size(); i++){
                
                inDegree[adj[node][i]]--;
                
                if(!inDegree[adj[node][i]]){
                    
                }
            }
        }
        
        return ans;
    }
};