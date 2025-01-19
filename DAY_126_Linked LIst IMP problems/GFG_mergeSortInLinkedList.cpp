/*
The structure of linked list is the following

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Function to sort the given linked list using Merge Sort.
    
    void mergeThem(vector<int>&values,int start,int end,int mid){
        
        vector<int>temp(end-start+1);
        
        int left=start;
        int right=mid+1;
        int index=0;
        
        
        while(left<=mid && right<=end){
            
            if(values[left]<=values[right]){
                temp[index]=values[left];
                left++;
                index++;
            }else{
                temp[index]=values[right];
                right++;
                index++;
            }
            
        }
        
        while(left<=mid){
            temp[index]=values[left];
            left++;
            index++;
        }
        
        while(right<=end){
            temp[index]=values[right];
            index++;
            right++;
        }
        
        index=0;
        
        while(start<=end){
            
            values[start]=temp[index];
            start++;
            index++;
        }
        
        
        
        
        
        
    }
    
    void mergeSortt(vector<int>&values, int start,int end){
        
        if(start>=end){
            return;
        }
        int mid=start+(end-start)/2;
        
        mergeSortt(values,start,mid);
        mergeSortt(values,mid+1,end);
        
        mergeThem(values,start,end,mid);
    }
    Node* mergeSort(Node* head) {
        // your code here
        
        vector<int>values;
        
        Node* temp=head;
        
        while(temp!=NULL){
            values.push_back(temp->data);
            temp=temp->next;
        }
        
        mergeSortt(values,0,values.size()-1);
        
        temp=head;
        
        
        
        for(int i=0;i<values.size();i++){
            temp->data=values[i];
            temp=temp->next;
        }
        
        return head;
    }
};