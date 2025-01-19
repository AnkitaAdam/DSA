class Solution {
  public:

    // Function to return a tree created from postorder and inoreder traversals.
    
    int find(int* in, int target, int instart, int inend){
        
        for(int i=instart; i<=inend; i++){
            
            if(in[i]==target)
            {
                return i;
            }
        }
        
        return -1;
        
    }
    
    Node* tree(int *in, int *post, int instart, int inend, int index){
    
        if(instart>inend){
            return NULL;
        }
        
        Node *node=new Node(post[index]);
        
        int pos= find(in, post[index], instart,inend);
        
        node->right= tree(in,post,pos+1,inend,index-1);
        node->left = tree(in,post,instart,pos-1, index- (inend-pos)-1);
        
        return node;
    }
    
    Node *buildTree(int n, int in[], int post[]) {
        // Your code here
        
        return tree(in,post,0,n-1,n-1);
    }
};