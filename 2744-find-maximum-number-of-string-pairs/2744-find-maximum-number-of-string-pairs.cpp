class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& v) {
        int n = v.size();
        unordered_set<string>s;
        int count = 0;
        for(int i = 0  ; i < n ; i++){
            string rev  = v[i];
            reverse(rev.begin() ,  rev.end());
            if(s.find(rev)!=s.end()) count++;
            else 
            s.insert(v[i]);
        } 
        return count;
    }
};