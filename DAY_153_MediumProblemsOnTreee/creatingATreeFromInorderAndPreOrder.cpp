class Solution{
    public:
    
    int find(int *in, int target, int instart,int inend){
        
        for(int i=instart;i<=inend;i++){
            if(in[i]==target){
                return i;
            }
        }
        return -1;
    }
    
    Node* tree(int *in, int *pre, int instart, int inend, int index){
        
        if(instart>inend){
            return NULL;
        }
        
        Node* node=new Node(pre[index]);
        
        int pos= find(in, pre[index], instart,inend);
        
        node->left= tree(in,pre,instart,pos-1,index+1);
        node->right= tree(in,pre,pos+1, inend, index+ (pos-instart)+1);
        
        return node;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        
        return tree(in,pre,0,n-1,0);
        
        
    }
};