class Solution {
  public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    void towerOfHonoi(int n,int source,int help,int dest,long long &count){
        if(n==1){
            cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<"\n";
            count+=1;
            return;
        }
        
        towerOfHonoi(n-1,source,dest,help,count);
        cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<"\n";
        count+=1;
        towerOfHonoi(n-1,help,source,dest,count);
    }
    long long toh(int n, int from, int to, int aux) {
        // Your code here
        
        long long count=0;
        
        towerOfHonoi(n,from,aux,to,count);
        
        return count;
        
        
    }
};