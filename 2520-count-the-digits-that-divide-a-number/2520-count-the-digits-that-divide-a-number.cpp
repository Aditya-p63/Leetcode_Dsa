class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int o = num;
        while(num>0){
            int x = num%10;
            if(o%x==0) count++;
            num = num/10;
        }
        return count;
    }
};