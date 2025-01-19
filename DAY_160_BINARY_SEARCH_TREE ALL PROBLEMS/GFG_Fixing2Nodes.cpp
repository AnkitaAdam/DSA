/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traverse(TreeNode *root, vector<TreeNode*> &nodes){
        if(!root) return;
        
        traverse(root->left, nodes);
        nodes.push_back(root);
        traverse(root->right, nodes);

    }
    void recoverTree(TreeNode* root) {
        

        vector<TreeNode*> nodes;
        traverse(root, nodes);
        
        TreeNode *first = NULL;
        TreeNode *second = NULL;


        for( int i=1;i<nodes.size();i++ ){
            
            //if decreasing values found then consider something fault is there 
            if(nodes[i]->val < nodes[i-1]->val){
                if(first == NULL){
                    first = nodes[i-1];
                    second = nodes[i];
                }else{
                    second = nodes[i];
                }
            }
            
        }

        int data = first->val;
        first->val = second->val;
        second->val = data;

        

    }
};
