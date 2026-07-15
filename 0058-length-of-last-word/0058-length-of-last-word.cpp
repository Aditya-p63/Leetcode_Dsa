class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream a(s);
        string temp;
        string sa;
        while(a>>temp){
            sa=temp;
        }
        return sa.size();
    }
};