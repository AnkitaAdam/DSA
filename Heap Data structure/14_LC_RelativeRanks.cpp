class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        

        priority_queue<pair<int,int>> maxHeap;
        for(int i=0; i<score.size(); i++){
            maxHeap.push({score[i],i});

        }

        vector<string> ans(score.size());
        vector<string> medal = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        int rank =0;

        while(!maxHeap.empty()){

            auto pr = maxHeap.top();
            maxHeap.pop();

            if(rank < 3){
                ans[pr.second] = medal[rank];
            }else{
                ans[pr.second] = to_string(rank+1);
            }
            
            rank++;
            
        }

        return ans;





    }
};


// 10 9 8 4 3
