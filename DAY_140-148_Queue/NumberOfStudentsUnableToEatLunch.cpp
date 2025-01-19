class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        

        int index=0;

        queue<int>qu;

        for(int i=0;i<students.size();i++){
            qu.push(students[i]);
        }


        int count=0;


        while(!qu.empty() && count<qu.size()){
            if(qu.front() == sandwiches[index]){
                index++;
                qu.pop();
                count=0;
            }else{
                qu.push(qu.front());
                qu.pop();
                count++;
            }
        }


        return qu.size();


    }
};