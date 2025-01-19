
class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        
        stack<int>st;
        int m=q.size()-k;
        
        while(k--){
            
            st.push(q.front());
            q.pop();
            
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        while(m--){
            q.push(q.front());
            q.pop();
            
        }
        
        return q;
        
    }
};