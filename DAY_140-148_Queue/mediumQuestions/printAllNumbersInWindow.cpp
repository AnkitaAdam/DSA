class Solution {
public:
    void print(queue<int> q){
        cout<<"\n";
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
    }
    vector<int> printEveryWindow(vector<int>& nums, int k) {
 
        queue<int> q;

        for(int i=0;i<k;i++){
            q.push(nums[i]);
        }

        for(int i=k;i<nums.size(); i++){
            print(q);
            q.pop();
            q.push(nums[i]);

        }
        print(q);

    }
};