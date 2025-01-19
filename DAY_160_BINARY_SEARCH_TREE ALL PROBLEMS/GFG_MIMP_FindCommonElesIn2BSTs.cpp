
class Solution {
  public:
    // Function to find the nodes that are common in both BST.
    vector<int> findCommon(Node *root1, Node *root2) {
        // Your code here
        
        
        vector<int> ans;
        stack<Node*> s1, s2;
        //i amgoing to use inorder traversal using stack
        
        //first put all the leftmost elements into stack for r1, r2
        while(root1){
            s1.push(root1);
            root1 = root1->left;
        }
        
        while(root2){
            s2.push(root2);
            root2=root2->left;
        }
        
        //then check the stack
        while(!s1.empty() && !s2.empty()){
            
            //first case : can be the data in stack equal..common found
            if(s1.top()->data == s2.top()->data){
                
                ans.push_back(s1.top()->data);
                root1 = s1.top()->right;
                s1.pop();
                root2 = s2.top()->right;
                s2.pop();
            }
            
            //second case : s1 ka data > s2 ka data
            else if(s1.top()->data > s2.top()->data){
                
                root2 = s2.top()->right;
                s2.pop();
            }
            
            //third case: s2 ka data > s1 ka data
            else{
                root1 = s1.top()->right;
                s1.pop();
            }
            
            // then again uske leftwalo ko stack mei push karo
            while(root1){
                s1.push(root1);
                root1 = root1->left;
            }
            
            while(root2){
                s2.push(root2);
                root2 = root2->left;
            }
        }
        
        return ans;
        
    }
};