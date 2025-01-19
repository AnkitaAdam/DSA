class Solution {
public:

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans(nums1.size(),-1);

        for(int i=0;i<nums1.size();i++){

            int j = 0;
            while(j < nums2.size() && nums2[j] != nums1[i]){
                j++;
            }
          
            for(int k=j;k<nums2.size();k++){
                if(nums2[k]>nums1[i]){

                    ans[i]=nums2[k];
                    break;
                }
            }
        }

        return ans;
    }
};


// 1 3 4 2
// 3 4 -1 -1

// -1 3 -1 


