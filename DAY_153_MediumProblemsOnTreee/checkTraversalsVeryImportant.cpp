class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

class Solution{
    public:
    
    int find(int* in, int target,int instart,int inend){
        
        for(int i=instart;i<=inend;i++){
            
            if(in[i]==target){
                
                return i;
            }
        }
        
        return -1;
        
    }
    
    
    Node *tree(int *in, int *pre, int instart, int inend, int index){
        
        if(instart>inend){
            
            return NULL;
        }
        
        Node* node=new Node(pre[index]);
        
        
        int pos=find(in,pre[index],instart,inend);
        
        if(pos==-1){
            return NULL;
        }
        
        node->left=tree(in,pre,instart,pos-1, index+1);
        node->right=tree(in,pre,pos+1, inend, index+ (pos-instart)+1);
        
        return node;
    }
    
    void getpostorder(Node* root, vector<int>&ans){
        if(!root){
            return;
        }
        
        getpostorder(root->left, ans);
        getpostorder(root->right, ans);
        ans.push_back(root->data);
        
    }
    bool checktree(int pre[], int in[], int post[], int n) 
    { 
    	// Your code goes here
    	
    	Node* root=tree(in,pre,0,n-1,0);
    	
    	if(!root){
    	    return false;
    	}
    	vector<int>ans;
    	
    	getpostorder(root,ans);
    	
    	for(int i=0;i<n;i++){
    	    
    	    if(ans[i]!=post[i]){
    	        
    	        return false;
    	    }
    	}
    	
    	return true;
    	
    } 

};