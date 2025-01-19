class MyStack {
public:

    queue<int> qu1;
    queue<int> qu2;

    MyStack() {
        
    }
    bool empty() {
        return qu1.empty() && qu2.empty();
    }
    void push(int x) {
        
        if(empty()){
            qu1.push(x);
        }else if(qu2.empty()){
            qu1.push(x);
        }else{
            qu2.push(x);
        }

    }
    
    int pop() {
        
        if(empty()){
            return -1;
        }else if(qu1.empty()){

            while(qu2.size()>1){
                qu1.push(qu2.front());
                qu2.pop();
            }
            int ele=qu2.front();
            qu2.pop();
            return ele;

        }else if(qu2.empty()){
            while(qu1.size()>1){
                qu2.push(qu1.front());
                qu1.pop();
            }
        }
        int ele=qu1.front();
        qu1.pop();
        return ele;

    }
    
    int top() {
        if(empty()){
            return 0;
        }else if(qu1.empty()){
            return qu2.back();
        }
        return qu1.back();
    }
    
    
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */