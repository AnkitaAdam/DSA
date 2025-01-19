#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int val){
			data=val;
			next=NULL;
		}						
};

void traverse(Node* temp){
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}





Node* createLinkedListAtBeg(int arr[],int index,int n,Node * prev){
	
	if(index==n){
		return prev;
	}
	
	Node *temp=new Node(arr[index]);
	temp->next=prev;
	createLinkedListAtBeg(arr,index+1,n,temp);
}

Node* createLinkedListAtEnd(int arr[],int index,int n){
	
	if(index==n){
		return NULL;
	}
	
	Node* temp=new Node(arr[index]);
	temp->next=createLinkedListAtEnd(arr,index+1,n);
	return temp;
}


void insertAtBeg(int arr[],int n){
	Node *head=NULL;
	
	for(int i=0;i<n;i++){
		if(head==NULL){
			head=new Node(arr[i]);
		}else{
			Node* temp=new Node(arr[i]);
			temp->next=head;
			head=temp;
		}
	}
	
	cout<<"\nInsertion at beg without recursion : \n";
	traverse(head);
}

void insertAtEnd(int arr[],int n){
	
	Node* head=NULL;
	Node* tail=NULL;
	for(int i=0;i<n;i++){
		if(head==NULL){
			head=new Node(arr[i]);
			tail=head;
		}
		else{
			tail->next=new Node(arr[i]);
			tail=tail->next;
		}
	}
	cout<<"\nInsertion at end without recursion : \n";
	traverse(head);
}

Node* insertAtMiddle(int pos,int val,Node* head){
	pos--;
	Node* temp=head;
	while(pos--){
		temp=temp->next;
	}
	if(temp==NULL){
		cout<<"\nIndex out of bounds \n";
	}
	Node* temp2=new Node(val);
	temp2->next=temp->next;
	temp->next=temp2;
}

void deleteNodeAtBeg(){
	int arr[]={1,2,3,4,5};
	Node *head=createLinkedListAtBeg(arr,0,5,NULL);
	if(head!=NULL){
			Node*temp=head;
			head=head->next;
			delete temp;
	}
	cout<<"\nDeleting at beg : \n";
	traverse(head);
}

void deleteNodeAtEnd(){
	int arr[]={1,2,3,4,5};
	Node *head=createLinkedListAtBeg(arr,0,5,NULL);
	
	if(head!=NULL){
		if(head->next==NULL){
			Node *temp=head;
			head=head->next;
			delete temp;
		}else{
			Node* curr=head;
			Node* prev=NULL;
			while(curr->next!=NULL){
				prev=curr;
				curr=curr->next;
			
			}
			
			prev->next=curr->next;
			delete curr;
		}
			
	}
	cout<<"\nAfter deleting at end : \n";
	traverse(head);
}


void deleteAtParticularPosition(int pos){
	int arr[]={1,2,3,4,5};
	Node *head=createLinkedListAtBeg(arr,0,5,NULL);
	
	if(pos==1){
		Node *temp=head;
		head=head->next;
		delete temp;
	}
	if(head!=NULL){
		pos--;
		Node*curr=head;
		Node* prev=NULL;
		while(pos--){
			prev=curr;
			curr=curr->next;
		}
		prev->next=curr->next;
		delete curr;
	}
	cout<<"\nAfter deleting at position  : \n";
	traverse(head);
}
int main(){       
	int arr[]={1,2,3,4,5};
	int n=5;
	
	Node *head=createLinkedListAtBeg(arr,0,n,NULL);
	cout<<"\nInsertion at beg with recursion : \n";
	traverse(head);
	
	Node* head1=createLinkedListAtEnd(arr,0,n);
	
	cout<<"\nInsertion at end with recursion : \n";
	traverse(head1);
	
	insertAtBeg(arr,n);
	insertAtEnd(arr,n);
	
	insertAtMiddle(3,30,head1);
	cout<<"\nList after inserting at given position : \n";
	traverse(head1);
	
	deleteNodeAtBeg();
	deleteNodeAtEnd();
	
//	cout<<"\nDeleting at end : \n";
//	traverse(head);
//	
	deleteAtParticularPosition(3);
//	cout<<"\nDeleting at particular position : \n";
//	traverse(head);
}                      