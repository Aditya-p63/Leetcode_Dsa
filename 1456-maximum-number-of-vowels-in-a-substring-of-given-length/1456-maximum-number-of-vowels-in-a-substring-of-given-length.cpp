class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int count = 0;
        int maxVowel = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'i') {
                count++;
            }
        }
        maxVowel = count;
        int i = 0;
        int j = k;
        while (j < n) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                count--;
            }
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' ||
                s[j] == 'u') {
                count++;
            }
            maxVowel = max(maxVowel, count);
            i++;
            j++;
        }
        return maxVowel;
    }
};