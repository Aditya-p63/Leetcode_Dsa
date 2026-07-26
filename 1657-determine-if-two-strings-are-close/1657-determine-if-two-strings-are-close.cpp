class Solution {
public:
    bool closeStrings(string str1, string str2) {
        if(str1.size()!=str2.size()) return false;

            unordered_map<char,int>m1,m2;

            for(int i = 0 ; i < str1.size() ; i++){
                m1[str1[i]]++;
                m2[str2[i]]++;
            }

            for(auto x : m1 ){
                char ch = x.first;
                if(m2.find(ch)==m2.end()) return false;
            }

            unordered_map<int,int>h1,h2;

            for(auto x : m1){
                int fre = x.second;
                h1[fre]++;
            }
            for(auto x : m2){
                int fre = x.second;
                h2[fre]++;
            }

            //comparing h1 and h2 
              for(auto x : h1 ){
                int  k = x.first;
                int fre = x.second;
                if(h2.find(k)==h2.end()) return false;
                if(h2[k]!=h1[k]) return false;
            }
        return true;
    }
};