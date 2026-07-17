class Solution {
public:
    int countSegments(string s) {
        stringstream a(s);
        string t ="";
        int count  = 0;
        while(a>>t){
            count++;
        }
        return count;
    }
};