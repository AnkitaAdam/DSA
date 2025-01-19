stack<int>minStack;

bool isFull(stack<int>& s,int n){
	// Your code goes here
	
	return s.size()==n;
}

void push(stack<int>& s, int a){
	// Your code goes here

	
	if(s.empty()){
	    s.push(a);
	    minStack.push(a);
	    
	}else{
	    s.push(a);
	    minStack.push(min(minStack.top(),a));
	}
	
}



bool isEmpty(stack<int>& s){
	// Your code goes here
	
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	
	if(isEmpty(s)){
	    return -1;
	}else{
	    
	    int ele=s.top();
	    s.pop();
	    return ele;
	}
}

int getMin(stack<int>& s){
	// Your code goes here
	
	return minStack.top();
}