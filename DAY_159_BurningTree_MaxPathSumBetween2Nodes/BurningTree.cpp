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

    int burnNode(TreeNode* root, int &timer, int target){

        if(!root) return 0;
    
        if(root->val == target ) return -1;

        int left = burnNode(root->left, timer, target);
        int right = burnNode(root->right, timer, target);

        if(left < 0){
            timer = max(timer, abs(left)+right);
            return left-1;
        }
        if(right<0){
            timer = max(timer, abs(right)+left);
            return right-1;
        }

        return 1+max(left,right);
    }

    void findBurningNode(TreeNode* root, int start, TreeNode* &burningNode){

        if(!root) return;

        if(root->val == start ) {
            burningNode = root;
            return;

        }

        findBurningNode(root->left, start, burningNode);
        findBurningNode(root->right, start, burningNode);

    }

    int findHeight(TreeNode* burningNode){

        if(!burningNode) return 0;

        return 1+ max(findHeight(burningNode->left), findHeight(burningNode->right));
    }

    int amountOfTime(TreeNode* root, int start) {
        
        if (root->val == start && !root->left && !root->right) 
        return 0; // Single node is the start node, so burn time is 0


        int timer = 0;
        burnNode(root, timer, start);

        TreeNode* burningNode=NULL;
        findBurningNode(root,start,burningNode);

        int ht = findHeight(burningNode)-1;

        return max(ht,timer);


    }
};
  
//     1
//    2
//   3
//  4
// 5