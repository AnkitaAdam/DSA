bool parent(Node *root, int a,int b){
    
    if(!root){
        return 0;
    }
    
    if(root->left && root->right){
        if((root->left->data==a && root->right->data==b)){
            return 1;
        }
        
        if((root->left->data==b && root->right->data==a)){
            return 1;
        }
    }
    
    return parent(root->left,a,b)|| parent(root->right,a,b);
}

bool isCousins(Node *root, int a, int b) {
    // add code here.
    
    
    queue<Node*> qu;
    
    qu.push(root);
    int l1=-1;
    int l2=-1;
    int level=0;
    
    
    while(!qu.empty()){
        
        int n=qu.size();
        
        while(n--){
            
            Node* temp=qu.front();
            qu.pop();
            
            if(temp->data==a){
                l1=level;
            }
            
            if(temp->data==b){
                l2=level;
            }
            
            if(temp->left){
                qu.push(temp->left);
            }
            
            if(temp->right){
                qu.push(temp->right);
            }
        }
        
        level++;
        
        if(l1 != l2){
            return 0;
        }
        
        if(l1 != -1 && l2!= -1){
            break;
        }
    }
    
    if(l1==-1 || l2==-1){
            return 0;
    }
        
    
    
    return !parent(root,a,b);
    
    
}