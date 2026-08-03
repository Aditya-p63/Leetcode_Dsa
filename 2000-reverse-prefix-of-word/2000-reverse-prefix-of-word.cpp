class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        stack<char>st;
        string s = "";
        int idx = -1;
        for(int i = 0 ; i < n ; i++){
            if(word[i]!=ch){
                st.push(word[i]);
            }
            else {
                st.push(word[i]);
                idx = i;
                break;
            }
        }
        if(idx!=-1){
            while(st.size()>0){
                s += st.top();
                st.pop();
            }
            for(int i = idx+1;i<n;i++){
                s+=word[i];
            }
        }
        if(idx==-1) return word;
        return s;
    }
};