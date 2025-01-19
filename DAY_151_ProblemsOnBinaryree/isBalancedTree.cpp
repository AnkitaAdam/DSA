struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    int height(Node* root, int &valid){
        
        if(!root){
            return 0;
        }
        
        int lh=height(root->left,valid);
        int rh=height(root->right,valid);
        
        if(abs(lh-rh)>1){
            valid=0;
        }
        
        return 1+max(lh,rh);
        
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        
        int valid=1;
        
        height(root,valid);
        
        return valid;
    }
};