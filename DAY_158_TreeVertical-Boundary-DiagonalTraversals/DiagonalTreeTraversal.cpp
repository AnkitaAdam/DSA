/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


void find(Node *root, int &left,int pos){
    if(!root){
        return;
    }
    
    left=max(left,pos);
    
    find(root->left,left,pos+1);
    find(root->right,left,pos);
    
}

void findDiagEles(Node *root, int pos, vector<vector<int>>&eles){
    
    if(!root){
        return; 
    }
    
    eles[pos].push_back(root->data);
    
    findDiagEles(root->left, pos+1, eles);
    findDiagEles(root->right, pos, eles);
    
}
vector<int> diagonal(Node *root)
{
   // your code here
   
   int left=0;
   
   find(root,left,0);
   
   vector<vector<int>>eles(left+1);
   
   findDiagEles(root, 0, eles);
   
   vector<int>ans;
   
   for(int i=0;i<eles.size();i++){
       for(int j=0;j<eles[i].size();j++){
           ans.push_back(eles[i][j]);
       }
   }
   
   return ans;
}