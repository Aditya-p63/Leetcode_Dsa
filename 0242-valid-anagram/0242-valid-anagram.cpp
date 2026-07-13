class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>m1;//for s 
        for(int i = 0 ; i < s.length() ; i++){
            m1[s[i]]++;
        }
        for(int i = 0 ;i < t.size() ; i++){
            char ch = t[i];
            if(m1.find(ch)!=m1.end()){
                m1[ch]--;
                if(m1[ch]==0) m1.erase(ch);
            }
            else return false;
        }
        if(m1.size()>0) return false;
        return true;
    }
};