vector<int> leftView(Node *root)
{
   // Your code here
   
   queue<Node*> qu;
   qu.push(root);
   vector<int> ans;
   
   while(!qu.empty()){
       
       int n=qu.size();
       
       for(int i=0;i<n;i++){
           
           Node* temp=qu.front();
           
           qu.pop();
           
           if(i==0){
               ans.push_back(temp->data);
           }
           
           if(temp->left) qu.push(temp->left);
           if(temp->right) qu.push(temp->right);
           
           
       }
       
   }
   
   return ans;
}