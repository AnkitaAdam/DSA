class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.7
    
    void find(Node *root, int &left,int &right,int pos){
        
        if(!root){
            return;
        }
        
        left=min(left,pos);
        right=max(pos,right);
        
        find(root->left,left,right,pos-1);
        find(root->right,left,right,pos+1);
    }
    
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        
        int left=0;
        int right=0;
        
        find(root, left,right,0);
        
        vector<vector<int>>negatives(abs(left)+1);
        vector<vector<int>>positives(right+1);
        
        queue<Node*> qu;
        queue<int> indexes;
        
        qu.push(root);
        indexes.push(0);
        
        while(!qu.empty()){
            
            Node* temp=qu.front();
            qu.pop();
            
            int pos=indexes.front();
            indexes.pop();
            
            if(pos>=0){
                positives[pos].push_back(temp->data);
            }else{
                negatives[abs(pos)].push_back(temp->data);
            }
            
            if(temp->left){
                qu.push(temp->left);
                indexes.push(pos-1);
                
            }
            
            if(temp->right){
                qu.push(temp->right);
                indexes.push(pos+1);
            }
        }
        
        
        vector<int>ans;
        
        for(int i=negatives.size()-1;i>0;i--){
            for(int j=0;j<negatives[i].size();j++){
                ans.push_back(negatives[i][j]);
            }
        }
        
        for(int i=0;i<positives.size();i++){
            for(int j=0;j<positives[i].size();j++){
                ans.push_back(positives[i][j]);
            }
        }
        
        return ans;
        
    }
};