class Solution
{
    public:
    //Function to insert heap.
    
    priority_queue<int> leftMaxHeap;
    priority_queue<int, vector<int>, greater<int>> rightMinHeap;
    
    void insertHeap(int &x)
    {
        if(leftMaxHeap.empty()){
            leftMaxHeap.push(x);
            return;
        }
        
        if(x > leftMaxHeap.top()){
            
            rightMinHeap.push(x);
        }
        else{
            
            leftMaxHeap.push(x);
        }
        
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        //rightMinHeap should not be greater than leftMaxHeap;
        
        if(rightMinHeap.size() > leftMaxHeap.size()){
            leftMaxHeap.push(rightMinHeap.top());
            rightMinHeap.pop();
        }
        
        //difference of leftMaxHeap - RightMinHeap should not be greater than 1
        else{
            if(rightMinHeap.size() < leftMaxHeap.size()-1){
                rightMinHeap.push(leftMaxHeap.top());
                leftMaxHeap.pop();
            }
        }
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        
        //left == right
        //left>right
        if(leftMaxHeap.size() > rightMinHeap.size()) return leftMaxHeap.top();
        else{
            
            double ans = leftMaxHeap.top() + rightMinHeap.top();
            
            ans /=2;
            return ans;
        }
        
    }
};