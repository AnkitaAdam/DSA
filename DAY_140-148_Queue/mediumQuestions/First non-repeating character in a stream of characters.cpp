string Solution::solve(string A) {
    
    string ans="";
    queue<char> q;
    vector<long long> freq(26,0);
    
    for(long long i=0;i<A.length();i++){
        
        if(freq[A[i]-'a']==0){
            q.push(A[i]);
        }
        
        freq[A[i]-'a']++;
        
        
        while(!q.empty() && freq[q.front()-'a']>1){
                    q.pop();
        }
        
        if(q.empty()){
            ans+='#';
        }else{
            ans+=q.front();
        }
        
    }
    return ans;
}


// hrcwuengcbnuchctlux