class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        // method 1
        // vector<int> ans;
        // int n = nums.size();
        // for (int i = 0; i < n - k + 1; i++) {
        //     int mx = INT_MIN;
        //     for (int j = i; j < i + k; j++) {
        //         mx = max(mx, nums[j]);
        //     }
        //     ans.push_back(mx);
        // }
        // return ans;
        
        // method 2
            int n = arr.size();
            int ngi[n];
            stack<int> st;
            st.push(n - 1);
            ngi[n - 1] = n;
            for (int i = n - 2; i >= 0; i--) {
                while (st.size() > 0 && arr[st.top()] <= arr[i]) {
                    st.pop();
                }
                if (st.size() == 0)
                    ngi[i] = n;
                else
                    ngi[i] = st.top();
                st.push(i);
            }
            int j =0;
            vector<int> ans;
            for (int i = 0; i < n - k + 1; i++) {
                int mx = arr[j];
                 j = i;
                while (j < i + k) {
                    if(j<i) j = i;
                    mx = arr[j];
                    if(ngi[j]>=i+k) break;
                    j = ngi[j];
                }
                ans.push_back(mx);
            }
        return ans;
         }
    };
    // #include <print>
    // auto init = std::atexit(
    //     []() { std::println(std::fopen("display_runtime.txt", "w"), "0"); });