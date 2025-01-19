class Solution{
public:	
	
	bool checkpalindrome(string s, int start,int end){
	    if(start>=end){
	        return 1;
	    }
	    
	    if(s[start]!=s[end]){
	        return 0;
	    }
	    
	        return checkpalindrome(s,start+1,end-1);
	        
	    
	}
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    
	    return checkpalindrome(S,0,S.size()-1);
	}

};