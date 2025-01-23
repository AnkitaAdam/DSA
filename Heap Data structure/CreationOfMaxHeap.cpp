#include<iostream>
using namespace std;


class MaxHeap{
    int *arr;
    int size;
    int total_size;

    public:
    MaxHeap(int size){
        arr = new int[size];
        this->size=0;
        this->total_size = size;
    }

    void insert(int data){
        if(size == total_size){
            cout<<"\noverflow";
            return;
        }
        arr[size] = data;

        int index = size;
        size++;

        while(index>=0 && arr[index] > arr[(index-1)/2]){
            swap(arr[(index-1)/2],arr[index]);
            index = (index-1)/2;
        }
        cout<<data<<" is added..\n";
        
    }
    
    void print(){
    	for(int i=0;i<size;i++){
    		cout<<arr[i]<<" ";
		}
	}
};


int main(){
    MaxHeap heap(5);
    heap.insert(10);
    heap.insert(11);
    heap.insert(16);
    heap.insert(3);
    heap.print();
}