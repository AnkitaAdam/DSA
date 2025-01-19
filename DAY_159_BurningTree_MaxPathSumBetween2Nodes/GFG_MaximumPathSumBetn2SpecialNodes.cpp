/*
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

class Solution {
public:
    int pathSum(Node* root, int &sum){
        
        if(!root) return 0;
        if(!root->left && !root->right) return root->data;
        int left = pathSum(root->left, sum);
        int right = pathSum(root->right, sum);
        
        //if both child are present
        if(root->left && root->right){
            sum = max(sum, root->data+left+right);
            return root->data+max(left,right);
        }
        
        //if only one left child exists
        if(!root->right){
            return root->data+left;
        }
        
        if(!root->left){
            return root->data+right;
        }
        
        
    }
    
    int maxPathSum(Node* root)
    {
        // code here
        
        int sum = INT_MIN;
        int val = pathSum(root, sum);
        
        if(root->right && root->left){
            return sum;
        }
        
        return max(val,sum);
        
    }
};