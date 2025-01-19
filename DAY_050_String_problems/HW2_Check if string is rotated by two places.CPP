class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
     void rotateclockwise(string &clockwise){
         
       char s= clockwise[clockwise.size()-1];
       for(int i=clockwise.size()-2;i>=0;i--){
           clockwise[i+1]=clockwise[i];
       }
       clockwise[0]=s;
    }
    
    void rotateanticlockwise(string &anticlockwise){
        char s=anticlockwise[0];
        int i=1;
        while(i<anticlockwise.size()){
            anticlockwise[i-1]=anticlockwise[i];
            i++;
        }
        anticlockwise[anticlockwise.size()-1]=s;
    }
    
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string clockwise=str1;
        
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        if(clockwise==str2){
            return true;
        }
        
        string anticlockwise=str1;
        
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        
        if(anticlockwise==str2){
            return true;
        }
        
        return false;
    }

};