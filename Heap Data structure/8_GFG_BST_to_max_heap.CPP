
/*struct Node {
    int data;
    Node *left, *right;
};*/

class Solution{
  public:
  
    void inorder(Node* root, vector<int>&nodes){
        if(!root) return;
        
        inorder(root->left, nodes);
        nodes.push_back(root->data);
        inorder(root->right, nodes);
        
    }
    
    void maxHeap(Node* root, vector<int> &nodes,int &index){
        
        if(!root) return;
        
        maxHeap(root->left, nodes, index);
        maxHeap(root->right, nodes, index);
        root->data = nodes[index];
        index++;
        
    }
    
    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        
        vector<int> nodes;
        
        inorder(root, nodes);
        
        int iindex=0;
        maxHeap(root, nodes, iindex);
        
        
        
    }    
    
};