class Solution {
public:
long long x(int n){
    int v=n;
    if(n==0) return 1;
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return v ^ n;
    
}
    int bitwiseComplement(int n) {
        return x(n);
    }
};