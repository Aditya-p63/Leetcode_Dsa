class Solution {
public:
    using ll = long long int;
    ll f(vector<int>& arr, ll k) {
        ll ans = 0, stu = 1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] + ans <= k)
                ans += arr[i];
            else {
                stu++;
                ans = arr[i];
            }
        }
        return stu;
    }
    int splitArray(vector<int>& arr, int k) {
        ll lo = *max_element(arr.begin(), arr.end());
        ll hi = accumulate(arr.begin(), arr.end(), 0LL);
        int n = arr.size();
        if (k > n)
            return -1;
        while (lo <= hi) {
            ll mid = lo + ((hi - lo) / 2);
            if (f(arr, mid) <= k) {
                hi = mid - 1;
            } else
                lo = mid + 1;
        }
        return lo;
    }
};