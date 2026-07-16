class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char c='f';
        for(int i=0;i<s.size()+1;i++){
            if(s[i]!=t[i]) {
                c=t[i];
                return c;}
        }
        return '-1';
    }
};