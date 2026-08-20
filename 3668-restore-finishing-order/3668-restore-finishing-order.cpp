class Solution {
public:
    vector<int> recoverOrder(vector<int>& v1, vector<int>& v2) {
        // int n = order.size();
        vector<int> v;
        for (auto x : v1) {
            if (find(v2.begin(), v2.end(), x) != v2.end())
                v.push_back(x);
        }
        return v;
    }
};