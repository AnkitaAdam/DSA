class Solution {
public:

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // vector<int>ans;
        // queue<int> q;
        // int maxIndex=-1;

        // for(int i=0;i<k;i++){
        //     q.push(i);
        //     if(maxIndex==-1 || nums[i]>nums[maxIndex]){
        //         maxIndex=i;
        //     }
        // }
        // ans.push_back(nums[maxIndex]);
        
        // for(int i=k;i<nums.size(); i++){
            

        //     if(maxIndex<=i-k){
        //         maxIndex=i-k + 1;
        //         for (int j = maxIndex + 1; j <= i; ++j) {
        //             if (nums[j] > nums[maxIndex]) {
        //                 maxIndex = j;
        //             }
        //         }
        //     }else if(nums[i]> nums[maxIndex]){
        //         maxIndex=i;
        //     }
        //     ans.push_back(nums[maxIndex]);
        // }
 

        // return ans;


        vector<int>ans;
        deque<int>dq;

        for(int i=0;i<k-1;i++){

       
                while(!dq.empty() && nums[dq.back()] < nums[i]){
                    dq.pop_back();
                }
                dq.push_back(i);
            
            
        }
       
        for(int i=k-1;i<nums.size();i++){
        // remove smaller element
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            } 
            dq.push_back(i);
        
        // if front ele is outside the window pop that element
            if(dq.front() <= i-k){
                dq.pop_front();
            }
        // find ans
            ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};