vector<long long> printFirstNegativeInteger(long long int A[],
 long long int N, long long int k) {
                                                 
        
        vector<long long> ans;
        queue<long long>q;
        
        for(int i=0;i<k-1;i++){
            if(A[i]<0)
                q.push(i);
        }
        
        
        
        
        for(int i=k-1;i<N;i++){
            
            if(A[i]<0)
                q.push(i);
                
            if(q.empty()){
                ans.push_back(0);
            }else{
                if(q.front()<=i-k){
                    q.pop();
                }
                
                if(q.empty()){
                    ans.push_back(0);
                    
                }else{
                    ans.push_back(A[q.front()]);
                }
            }
            // ele=checkNegative(q);
            
        }
        
        
        return ans;
                                                 
 }