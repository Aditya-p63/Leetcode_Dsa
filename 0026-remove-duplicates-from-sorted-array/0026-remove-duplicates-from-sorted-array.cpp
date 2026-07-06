class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        int i = 0;
        for(auto x : nums){
            if(s.find(x)==s.end()){
                s.insert(x);
                nums[i] = x;
                i++;
            }
        }
        return i;
    }
};