class Solution {
public:
    bool hasAlternatingBits(int n) {
        string ans = "";

        if (n == 0) {
            ans = "0";
        } else {
            while (n > 0) {
                ans = char((n % 2) + '0')            + ans; 
                n = n / 2;
            }
        }
        int p = ans.size();
        for(int i = 0 ; i< p-1; i++){
            if(ans[i]==ans[i+1]) return false;
        }
return true;
    }
};