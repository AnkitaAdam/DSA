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
    bool isCompleteTree(TreeNode* root) {
        
        if(!root) return true;

        queue<TreeNode*> qu;

        qu.push(root);
        bool isNULL = false;

        while(!qu.empty()){

            TreeNode *node = qu.front();
            qu.pop();

            if(node){

                if(isNULL){
                    return false;
                }
                //push the null nodes also to check the completeness and thats the trick
                qu.push(node->left);
                qu.push(node->right);

            }else{
                isNULL = true;
            }
        }

        return true;
    }
};

 