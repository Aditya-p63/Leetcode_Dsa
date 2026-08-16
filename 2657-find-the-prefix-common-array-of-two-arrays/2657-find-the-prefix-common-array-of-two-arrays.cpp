class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>c;
        vector<int>check(51,false);
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            if(check[A[i]]) count++;
            else check[A[i]]=true;
            if(check[B[i]]) count++;
            else check[B[i]]=true;
            c.push_back(count);
        }
        return c;
    }
};