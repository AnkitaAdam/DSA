class Solution {
public:
    int fillCups(vector<int>& amount) {
        

        // priority_queue<int> maxHeap(amount.begin(),amount.end());
        priority_queue<int> maxHeap;
        for(int i:amount){
            if(i>0) maxHeap.push(i);
        }


        int firstWater = 0;
        int secondWater = 0;
        int time=0;

        while(!maxHeap.empty()){

            if(!maxHeap.empty()){
                firstWater = maxHeap.top();
                maxHeap.pop();
            }

            if(!maxHeap.empty()){
                secondWater = maxHeap.top();
                maxHeap.pop();
            }

            time++;
            if(--firstWater > 0) maxHeap.push(firstWater);
            if(--secondWater > 0) maxHeap.push(secondWater);

        }

        return time;

    }
};

