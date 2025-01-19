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
    bool isBST(TreeNode* root, long long &prev){
        if(!root ) return 1;

        bool leftSubTree = isBST(root->left, prev);
        if(leftSubTree == 0) return 0;

        if(prev >= root->val) return 0;

        prev=root->val;

        return isBST(root->right, prev);
    }
    bool isValidBST(TreeNode* root) {
        
        long long prev=LLONG_MIN;
        if(!root->left && !root->right){
            return true;
        }
        return isBST(root, prev);
    }
};