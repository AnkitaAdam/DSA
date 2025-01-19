struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:

    void leftSubTree(Node* root, vector<int> &ans){
        
        if(!root || (!root->left && !root->right)){
            return;
            
        }
        
        ans.push_back(root->data);
        
        if(!root->left){
            leftSubTree(root->right,ans);
        }else{
            leftSubTree(root->left,ans);
        }
    }
    
    void leafNode(Node *root,vector<int>&ans){
        
        if(!root){
            return;
        }
        
        if(!root->left && !root->right){
            ans.push_back(root->data);
            
        }
        
        leafNode(root->left,ans);
        leafNode(root->right,ans);
        
    }
    
    void rightSubTree(Node *root, vector<int>&ans){
        
        if(!root || (!root->left && !root->right)){
            return;
        }
        
        if(root->right){
            
            rightSubTree(root->right,ans);
        }else{
            rightSubTree(root->left,ans);
        }
        
        ans.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        
        vector<int>ans;
        
        ans.push_back(root->data);
        
        leftSubTree(root->left,ans);
        
        if(root->left || root->right){
            leafNode(root,ans);
        }
        
        rightSubTree(root->right, ans);
        
        return ans;
        
    }
};