class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0,end=0;
        int minCapacity=0;

        for(int i=0;i<weights.size();i++){
            start=max(start,weights[i]);
            end+=weights[i];
        }

        while(start<=end){
            int mid=start+(end-start)/2;
            int weight=0;
            int day=1;
            for(int i=0;i<weights.size();i++){
                weight+=weights[i];
                if(weight>mid){
                    day++;
                    weight=weights[i];
                }
            }
            if(day<=days){
                minCapacity=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return minCapacity;
    }
};