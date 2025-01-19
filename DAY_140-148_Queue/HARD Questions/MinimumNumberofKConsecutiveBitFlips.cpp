class Solution {
public:
    

    int minKBitFlips(vector<int>& nums, int k) {
       
       queue <int> q;
       int flip=0;

       for(int i=0;i<nums.size();i++){

            if(!q.empty() && q.front()<i){
                q.pop();
            }

            if(q.size()%2==nums[i]){ //then we need to flip

                if(i+k-1>= nums.size()){
                    return -1;
                }

                q.push(i+k-1);
                flip++;
            }
       }

       return flip;
    }
};



// 0  -> even times flip --> 0 ------> consider this case 
//    -> oddd times flip --> 1
//                                             (in these above 2 cases only we need to flip the bit)
// 1  -> even times flip --> 1
//    -> oddd times flip --> 0 ------> consider this case 