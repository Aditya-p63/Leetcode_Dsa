class Solution {
public:
    bool areOccurrencesEqual(string s) {
        bool flag = true;
        unordered_map<char,int>mp;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
        }
        int z = mp.begin()->second;
        for(auto x :  mp){
            if(x.second!=z){
                flag = false;
                break;
            }
        }
        return flag;
    }
};