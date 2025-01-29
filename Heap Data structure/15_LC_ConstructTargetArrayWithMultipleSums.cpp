class Solution {
public:
    bool isPossible(vector<int>& target) {

        //following reverse approach .... bringing target to make 1 1 1
        
        priority_queue<int> maxHeap;

        int maxElement, remainingSum, elementToPush;
        long long sum =0;

        for(int i: target){
            maxHeap.push(i);
            sum+= i;
        }

        while(maxHeap.top() != 1){ //if top is 1 else remaining will be 1 only right?...so stop here :)

            maxElement = maxHeap.top();
            maxHeap.pop();


            remainingSum = sum - maxElement;

            //now check an important condition where it fails to make it to bring 1 1 1 ... as answer
            //can't be negative right?
            //can't be greater right?
            if(remainingSum<=0 || remainingSum>=maxElement) {
                return 0;
            }

            //now after seeing the maxEle and remaingSum now it's turn to push an element into the heap...so calculate the element to push

            // elementToPush = maxElement - remainingSum; //... going to give me a TLE :(
            
            //to avoid the TLE ...simply use % ...to reduce the repeated calculations...
            elementToPush = maxElement % remainingSum;

            //now 1 more challenege ... what if elementToPush became 0 ... :<
            if(elementToPush == 0){

                if(remainingSum == 1){
                    return 1;
                }else{
                    return 0;
                }
            }

            maxHeap.push(elementToPush);

            //now calculate the sum ..update the sum

            sum = remainingSum + elementToPush;

        }

        return 1;
    }
};