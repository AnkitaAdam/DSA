class Solution {
  public:
  
    void findMax(Node* root, int &k, int&ans){
        
        if(!root) return;
        
        findMax(root->right, k, ans);
        k--;
        if(k>=0) ans = root->data;
        if(k<=0) return;
        findMax(root->left, k, ans);
        
    }
    int kthLargest(Node *root, int k) {
        // Your code here
        
        int ans=0;
        findMax(root, k, ans);
        return ans;
        
    }
};