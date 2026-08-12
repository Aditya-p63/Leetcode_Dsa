class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i = 0 ; i < n ; i++){
            int x = nums[i];
            vector<int>a;
            while(x>0){
                a.push_back(x%10);
                x = x/10;
            }
            reverse(a.begin(),a.end());
            for(int d : a) ans.push_back(d);
        }
        return ans;
    }
};