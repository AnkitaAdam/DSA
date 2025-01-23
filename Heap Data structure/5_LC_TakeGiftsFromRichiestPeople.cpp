class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<int> pq;
        for(int i:gifts) pq.push(i);

        while(k-- && !pq.empty()){

            int num = pq.top();
            pq.pop();

            pq.push(sqrt(num));

        }

        long long sum =0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();

        }

        return sum;
    }
};


// 100 64 25 9 4

// it-1
// 64 25 10 9 4
// it-2
// 25 10 9 8 4
// it-3
// 10 9 8 5 4
// it-4
// 9 8 5 4 3   -> return their sum