class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>a;
        int x = n ;
        if(n%2==1) a.push_back(0);
        int sum = n/2;
         for (int i = sum; i >  0 ; i--) {
            a.push_back(i);
            a.push_back(-i);
        }
        return a;
    }
};