#include<iostream>
#include<queue>
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

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){

    int first;
    int second;
    int x;
    cout<<"\nEnter root element : ";
    cin>>x;

    queue<Node*>q;

    Node* root=new Node(x);
    q.push(root);
    

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        cout<<"\nEnter the left child data of "<<temp->data<<" : ";
        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }

        cout<<"\nEnter the right child data : "<<temp->data <<" : ";
        cin>>second;
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }

    }


    cout<<"\ninorder representation : ";

    inorder(root);



}