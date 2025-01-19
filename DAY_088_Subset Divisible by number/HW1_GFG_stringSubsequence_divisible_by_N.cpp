class Solution{

	public:
	
	void findSeq(string &s, int index,int n,string&temp, vector<string>&subseqs){
	    
	    if(index==n){
	        
	        if(temp.length()>0){
	            subseqs.push_back(temp);
	        }
	        
	        return;
	    }
	    
	    findSeq(s,index+1,n,temp,subseqs);
	    
	    temp.push_back(s[index]);
	    
	    findSeq(s,index+1,n,temp,subseqs);
	    temp.pop_back();
	}
	int countDivisibleSubseq(string s, int N)
	{
	    // Your code goes here
	    
	    vector<string>subseqs;
	    
	    string temp;
	    
	    findSeq(s,0,s.length(),temp,subseqs);
	    
	    int count=0;
	    
	    for(int i=0;i<subseqs.size();i++){
	        
	        int num=stoi(subseqs[i]);
	        
	        if(num%N == 0){
	            count+=1;
	        }
	    }
	    
	    return count;
	    
	}
	  
};