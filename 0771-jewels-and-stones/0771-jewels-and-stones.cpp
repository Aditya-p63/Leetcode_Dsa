class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        for (char c : stones) mp[c]++;

        int count = 0;
        for (char j : jewels) {
            if (mp.find(j) != mp.end()) count += mp[j];
        }
        return count;
    }
};
