class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        

        stack<int>st;

        for(int i=0;i<a.size();i++){
            bool dead=true;
            while(!st.empty() && st.top()>0 && a[i]<0){

                if(st.top() < -a[i]){
                    st.pop();
                    continue;
                }
                else if(st.top() == -a[i]){
                    st.pop();
                }
                dead=false;
                break;
                  
            }

            if(dead){
                st.push(a[i]);
            }
        }

        vector<int>ans(st.size());

        for(int i=st.size()-1; i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }

        return ans;
    }
};