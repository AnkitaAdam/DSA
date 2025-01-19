struct Node
{
    int data;
    Node* left;
    Node* right;
};
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    
    void find(Node* root, int pos, int & leftmost, int & rightmost){
        
        if(!root){
            return;
        }
        
        leftmost=min(leftmost, pos);
        rightmost=max(rightmost,pos);
        
        find(root->left, pos-1, leftmost, rightmost);
        find(root->right, pos+1, leftmost, rightmost);
        
        
    }
    
    vector<int> topView(Node *root)
    {
        //Your code here
        
        int leftmost=0;
        int rightmost=0;
       
        find(root, 0, leftmost,rightmost);
        
        vector<int>ans(rightmost-leftmost+1);
        vector<bool>filled(rightmost-leftmost+1, 0);
        
        queue<Node*> qu;
        queue<int> indexes;
        
        int pos=(-1*leftmost);
        
        qu.push(root);
        indexes.push(pos);
        
        while(!qu.empty()){
            
            Node* temp=qu.front();
            qu.pop();
            
            int index=indexes.front();
            indexes.pop();
            
            if(!filled[index]){
                
                filled[index]=1;
                ans[index]=temp->data;
            }
            
            if(temp->left){
                qu.push(temp->left);
                indexes.push(index-1);
            }
            
            if(temp->right){
                qu.push(temp->right);
                indexes.push(index+1);
            }
            
        }
       
       return ans;
    
    }

};