
void findSum(Node* root, int &k, int &sum){
    
    if(!root ) return;
   
    findSum(root->left, k, sum);
    k--;
    
    if(k>=0) sum+=root->data;
    if(k<=0) return;
    
    findSum(root->right, k, sum);
    
    
}

int sum(Node* root, int k) 
{ 
  
    // Your code here
    int sum=0;
    
    findSum(root, k, sum);
    
    return sum;
    
    
    
} 