class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string s="";
        string t="";
        for(int i=0;i<n;i++){
            s+=word1[i];
        }
        word1.clear();
        for(int i=0;i<m;i++){
            t+=word2[i];
        }
        return (s==t);
    }
};