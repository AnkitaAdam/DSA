
class Solution{
    public:
    
    void heapify(vector<int>&values, int index, int n){
        
        int largest = index; 
        
        int left = 2*index+1;
        int right = 2*index+2;
        
        if(left<n && values[left]> values[largest]){
            largest = left;
        }
        
        if(right<n && values[right]> values[largest]){
            largest = right;
        }
        
        if(largest!=index){
            swap(values[largest], values[index]);
            heapify(values, largest, n);
        }
        
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        
        vector<int> values;
        
        for(int i=0; i<a.size(); i++) values.push_back(a[i]);
        for(int i=0; i<b.size(); i++) values.push_back(b[i]);
        
        int size= values.size();
        
        for(int i=size/2-1; i>=0; i--){
            heapify(values, i, size);
        }
        
        return values;
    }
};