class Solution {
public:
    int kthGrammar(int n, int k) {
      if(n==1) return 0;
      if(k%2==0){//flip , k/2
            int temp=kthGrammar(n-1,k/2);
            if(temp==0) return 1;
            return 0;
      }
      else {//k is odd //same,k/2+1
        return kthGrammar(n-1,(k/2+1));
      }
    }
};