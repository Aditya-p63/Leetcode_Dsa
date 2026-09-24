class Solution {
public:
    int f(vector<int>& arr, int x) {
        int n = arr.size();
        int ans = 1, curr = 0;
        for (int i = 0; i < n; i++) {
            if (curr + arr[i] <= x)
                curr += arr[i];
            else {
                ans++;
                curr = arr[i];
            }
        }
        return ans;
    }
    int shipWithinDays(vector<int>& v, int x) {
        int sum = accumulate(v.begin(), v.end(), 0);
        int high = *max_element(v.begin(), v.end());
        int lo = high , hi = sum;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(f(v,mid)<=x){
                hi = mid-1;
            }else lo = mid+1;
        }
        return lo;
    }
};

