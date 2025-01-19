struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        
        
        vector<int>ans;
        
        stack<Node*> st1, st2;
        
        while(root1){
            st1.push(root1);
            root1 = root1 ->left;
        }
        
        while(root2){
            st2.push(root2);
            root2 = root2->left;
        }
        
        while(!st1.empty() || !st2.empty()){
            
             // If st1 is empty, take from st2
            if (st1.empty()) {
                
                ans.push_back(st2.top()->data);
                root2 = st2.top()->right;
                st2.pop();
            }
            // If st2 is empty, take from st1
            else if (st2.empty()) {
                ans.push_back(st1.top()->data);
                root1 = st1.top()->right;
                st1.pop();
            }
            
            else if( st1.top()->data > st2.top()->data){
                ans.push_back(st2.top()->data);
                root2 = st2.top()->right;
                st2.pop();
            }
            
            else if( st2.top()->data > st1.top()->data){
                ans.push_back(st1.top()->data);
                root1 = st1.top()->right;
                st1.pop();
            }
            
            else{
                ans.push_back(st1.top()->data);
                ans.push_back(st2.top()->data);
                root1 = st1.top()->right;
                st1.pop();
                root2 = st2.top()->right;
                st2.pop();
                
            }
            
            while(root1){
                st1.push(root1);
                root1 = root1->left;
            }
            
            while(root2){
                st2.push(root2);
                root2 = root2 -> left;
            }
            
        }
        
        
        
        return ans;
    }