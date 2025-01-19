class Solution {
  public:
    int smallestSubstring(string str) {
        // Code here
        
        int diff=0;
        
        vector<int>count(3,0);
        
        int first=0;
        int second=0;
        
        int len=str.size();
        
        while(first<str.size()){
            int index1=str[first]-'0';
            if(count[index1]==0){
                diff++;
            }
            count[index1]++;
            first++;
        }
        if(diff<3){
            return -1;
        }
        
        first=0;
        for(int i=0;i<3;i++){
            count[i]=0;
        }
        
        while(second<str.size()){
            
            while(diff && second<str.size()){
                
                 int index=str[second]-'0';
                 
                if(count[index] == 0){
                    diff--;
                }
                
                count[index]++;
                second++;
            }
            
            len=min(len,second-first);
            
            while(diff!=1){
                
                len=min(len,second-first);
                int index2=str[first]-'0';
                count[index2]--;
                
                if(count[index2] == 0){
                    diff++;
                }
                
                first++;
            }
        }
        
        return len;
    }
};