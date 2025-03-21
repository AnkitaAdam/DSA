vector<int>ans;

        int start=0;
        int n=numbers.size();
        int end=n-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(numbers[start]+numbers[end]==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }else if(numbers[start]+numbers[end]>target){
                end--;
            }else{
                start++;
            }
        }
        return ans;