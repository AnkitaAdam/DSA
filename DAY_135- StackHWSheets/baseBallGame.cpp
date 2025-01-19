class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        int sum=0;
        stack<int>st;

        for(string i: operations){

            if(i=="C"){
                if(!st.empty()){
                    st.pop();
                }
            }else if(i == "D"){
                if(!st.empty()){

                    st.push(st.top()*2);
                }
            }else if(i == "+"){

                if(!st.empty()){
                    int first=st.top();
                    st.pop();
                    int second=st.top();
                    
                    st.push(first);

                    st.push(first+second);
                }
            }else{
                st.push(stoi(i));
            }
        }

        while(!st.empty()){

            sum+=st.top();
            st.pop();
        }

        return sum;
    }
};