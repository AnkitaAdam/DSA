long int sumBT(Node* root)
{
    // Code here
    
    if(!root){
        return 0;
    }
    
    return (root->key + sumBT(root->left) + sumBT(root->right));
}