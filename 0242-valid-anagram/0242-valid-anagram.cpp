class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>m1;//for s 
        unordered_map<char,int>m2;//for t
        for(int i = 0 ; i < s.length() ; i++){
            m1[s[i]]++;
        }
        for(int i = 0 ; i < t.length() ; i++){
            m2[t[i]]++;
        }

        for(auto x : m1){
            char ch = x.first;
            int freq = x.second;
            if(m2.find(ch)!=m2.end()){
                int fq = m2[ch];
                if(freq!=fq) return false;
            }
            else return false;
        }
        return true;
    }
};