struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(Node* root)
{
  // Your code here
  
  if(!root){
      return 0;
  }
  
  if(!root->left && !root->right){
      return 1;
  }
  
  return countLeaves(root->left) + countLeaves(root->right);
}