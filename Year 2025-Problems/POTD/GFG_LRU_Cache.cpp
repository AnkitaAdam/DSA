
class LRUCache {
  private:
  public:
    // Constructor for initializing the cache capacity with the given value.
    
    class Node{
        
        public:
            int key;
            int val;
            Node* next;
            Node* prev;
            
            Node(int key1, int val1){
                key = key1;
                val = val1;
            }
        
        
    };
    
    unordered_map <int, Node*> mp;
    
    int capacity;
    
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    
    
    
    LRUCache(int cap) {
        // code here
        
        capacity = cap;
        head ->next = tail;
        tail->prev = head;
        
    }
    
    
    void insertNode(Node* newNode){
        
        Node* temp =head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
        
    }
    
    void deleteNode(Node* dltNode){
        
        Node* dltNextNode = dltNode->next;
        Node* dltPrevNode = dltNode->prev;
        dltPrevNode->next = dltNextNode;
        dltNextNode->prev = dltPrevNode;
        
    }

    // Function to return value corresponding to the key.
    int get(int key) {
        // your code here
        
        if(mp.find(key) != mp.end()){
            
            Node* currNode = mp[key];
            int ans = currNode->val;
            mp.erase(key);
            deleteNode(currNode);
            insertNode(currNode);
            mp[key]= head->next;
            
            return ans;
            
        }
        
        return -1;
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        // your code here
        
        if(mp.find(key) != mp.end()){
            
            Node* currNode = mp[key];
            mp.erase(key);
            deleteNode(currNode);
            
            
        }
        
        if(mp.size() == capacity){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
           
        }
        
        insertNode(new Node(key,value));
        mp[key] = head->next;
        
    }
};