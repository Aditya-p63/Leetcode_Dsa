class Solution {
public:
    bool isIsomorphic(string s, string t) { 
        vector<int> v(150, 1000); 
        if(s.length()!=t.size());
        //s perspective
        for(int i=0;i<s.size();i++){
            int idx=(int)s[i];
            if(v[idx]==1000){
            v[idx]=s[i]-t[i];}
            else if(v[idx]!=s[i]-t[i]){
                return false;
            }
        }

        //empty vector
        for(int i=0;i<150;i++){
            v[i]=1000;
        }
        //t perspective
         for(int i=0;i<s.size();i++){
            int idx=(int)t[i];
            if(v[idx]==1000){
            v[idx]=t[i]-s[i];}
            else if(v[idx]!=t[i]-s[i]){
                return false;
            }
        }
        return true;
        }
};