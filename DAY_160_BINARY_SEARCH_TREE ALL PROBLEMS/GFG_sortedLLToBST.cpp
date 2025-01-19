struct LNode { //Linked List
    int data;
    struct LNode* next;
    LNode(int x){
        data = x;
        next = NULL; }
};
struct TNode {   //Tree
    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x){
        data=x;
        left=right=NULL; }
}; */
class Solution {
  public:
    TNode* buildBST(vector<int> &nodes, int start, int end){
        
        if(start>end) return NULL;
        
        int mid = start + (end-start+1)/2;
        TNode* root = new TNode(nodes[mid]);
        root->left = buildBST(nodes, start, mid-1);
        root->right = buildBST(nodes, mid+1, end);
        return root;
        
    }
    TNode *sortedListToBST(LNode *head) {
        // code here
        
        
        vector<int>nodes;
        LNode* temp = head;
        while(temp != NULL){
            nodes.push_back(temp -> data);
            temp = temp->next;
        }
        
        
        
        return buildBST(nodes,0,nodes.size()-1);
        
    }
};
