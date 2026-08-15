class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum = 0;
        for(int i = k ; i>0 ; i--){
            if(numOnes!=0) {sum+=1;
            numOnes--;
            }
            else if(numZeros!=0) {sum+=0;numZeros--;}
            else {
                sum+=-1;
            numNegOnes--;
            }
        }
        return sum;
    }
};