class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>q;
    
      
       q.push(root);
       
       while(!q.empty()){
           
           int n=q.size();
           for(int i=0;i<n;i++){
               
               Node* curr=q.front();
               ans.push_back(curr->data);
               q.pop();
               
               if(curr->left){
                   q.push(curr->left);
               }
               
               if(curr->right){
                   q.push(curr->right);
               }
               
           }
           cout<<"\n";
       }
       
       return ans;
    }
}