class Solution {
public:

    int predictWinner(int index,int n,int person_left,int k,vector<bool>&eliminated){
        if(person_left==1){
            for(int i=0;i<n;i++){
                if(eliminated[i]==0){
                    return i;
                }
            }
            
        }

        int kill=(k-1)%person_left;

        while(kill--){
            index=(index+1)%n;
            while(eliminated[index]==1){
                index=(index+1)%n;
            }
        }
        
            eliminated[index]=1; //eliminate that person

            while(eliminated[index]==1){ //find next alive person
                index=(index+1)%n;
            }

            return predictWinner(index,n,person_left-1,k,eliminated);
    }
    int findTheWinner(int n, int k) {
        // std::vector<int> circle;
        // for (int i = 1; i <= n; ++i) {
        //     circle.push_back(i);
        // }
        // int cur_ind = 0;

        // while (circle.size() > 1) {
        //     int next_to_remove = (cur_ind + k - 1) % circle.size();
        //     circle.erase(circle.begin() + next_to_remove);
        //     cur_ind = next_to_remove;
        // }

        // return circle[0];

        vector<bool>eliminated(n,0);

        return predictWinner(0,n,n,k,eliminated)+1;
    }
};