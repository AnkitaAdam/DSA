class Solution{
  public:
  
    bool checkDeadEnd(Node *root, int lower, int upper){
        
        if(!root) return 0;
        
        if(!root->left && !root->right) {//coming at leaf node
            
            //check left side can be dead end?
            if(root->data-lower == 1 && upper-root->data == 1){
                return 1;
            }
            //check at right side can be dead end?
            else{
                return 0;
            }
        }
        
        return checkDeadEnd(root->left, lower,root->data) || checkDeadEnd(root->right, root->data, upper);
            
    }
    bool isDeadEnd(Node *root)
    {
        //Your code here
        
        return checkDeadEnd(root, 0, INT_MAX);
    }
};