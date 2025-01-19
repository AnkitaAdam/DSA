//Moore Voting Algorithm


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int vote=0;
        candidate=nums[0];
        vote++;
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]==candidate){
                vote++;
            }else{
                
                vote--;
            }

            if(vote==0){
                candidate=nums[i+1];
            }
            
        }
        return candidate;
    }
};