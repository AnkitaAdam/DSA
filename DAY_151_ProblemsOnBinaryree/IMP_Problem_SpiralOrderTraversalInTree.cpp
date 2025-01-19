vector<int> findSpiral(Node *root)
{
    //Your code here
    
    deque<Node*> qu;
    vector<int>ans;
    
    qu.push_back(root);
    
    bool rl=true;
    
    while(!qu.empty()){
        
        int n=qu.size();
        if(!rl){
            
            for(int i=0;i<n;i++){
                
                Node*  temp=qu.front();
                ans.push_back(temp->data);
                qu.pop_front();
                
                if(temp->left){
                    qu.push_back(temp->left);
                }
                
                if(temp->right){
                    qu.push_back(temp->right);
                }
                
            }
        } else{
            
            
            for(int i=0;i<n;i++){
                
                Node*  temp=qu.back();
                ans.push_back(temp->data);
                qu.pop_back();
                
                
                if(temp->right){
                    qu.push_front(temp->right);
                }
                
                if(temp->left){
                    qu.push_front(temp->left);
                }
                
            }
            
        }
        
        rl= !rl;
        
    }
    
    return ans;
}