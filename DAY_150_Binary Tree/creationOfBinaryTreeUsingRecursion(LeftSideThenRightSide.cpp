#include<iostream>
using namespace std;

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

Node* createTree(){

    int x;
    cout<<"\nEnter data : ";
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* temp=new Node(x);
    temp->left=createTree();
    temp->right=createTree();

    return temp;

}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){

    Node* root=createTree();
    cout<<"\nInorder Traversal of tree: \n";
    inorder(root);
}