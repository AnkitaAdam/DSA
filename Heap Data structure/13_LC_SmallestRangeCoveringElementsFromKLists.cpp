class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
        

        priority_queue<pair<int, pair<int,int>> , vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> minHeap;

        
        int maxEle=INT_MIN, minEle;
        for(int i=0; i<nums.size(); i++){

            minHeap.push( {nums[i][0], {i,0} } );
            maxEle = max(maxEle, nums[i][0]);

        }

        minEle=minHeap.top().first;
        vector<int> ans(2);
        ans[0] = minEle;
        ans[1] = maxEle;

        pair<int,pair<int,int>> temp;
        int row, col;

        while(minHeap.size() == nums.size()){

            temp = minHeap.top();
            minHeap.pop();

            minEle = temp.first;
            row = temp.second.first;
            col = temp.second.second;

            if( col+1 < nums[row].size()){

                minHeap.push({nums[row][col+1], {row, col+1} });

                maxEle = max(maxEle, nums[row][col+1]);
                minEle = minHeap.top().first;


                if(maxEle-minEle < ans[1]-ans[0]){
                    ans[0] = minEle;
                    ans[1] = maxEle;
                }

            }

        }


        return ans;

    }
};