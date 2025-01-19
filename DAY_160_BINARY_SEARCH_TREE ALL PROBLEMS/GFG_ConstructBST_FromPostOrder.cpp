Node* constructBST(int post[], int &size, int lower, int upper){
    
    if(size < 0 || lower>post[size] || upper<post[size]){
        return NULL;
    }
    
    Node* root = new Node(post[size--]);
    
    
    root->right = constructBST(post, size, root->data, upper);
    root->left = constructBST(post, size, lower, root->data);
    
    return root;
}

Node *constructTree (int post[], int size)
{
//code here
    size-=1;
    return constructBST(post, size, INT_MIN, INT_MAX);
    
}