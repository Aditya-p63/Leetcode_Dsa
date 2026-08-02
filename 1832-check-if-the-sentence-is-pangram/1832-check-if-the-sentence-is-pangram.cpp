class Solution {
public:
    bool checkIfPangram(string sentence) {
       
        int n=sentence.size();
        bool a[26]={false};
        for(int i=0;i<n;i++){
            char ch=sentence[i];
            int x=(int)ch;
           if(x>=97 && x<=122){
            a[x-97]=true;   
           }
        }
        for(int i=0;i<26;i++){
            if(a[i]==false){
                return false;
            }
        }
            return true;
    }
};