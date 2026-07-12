class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        vector<int>nsi(n);
        vector<int>psi(n);
        stack<int>st;
        // next smaller indx
        nsi[n-1]=n;
        st.push(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            while (st.size() > 0 && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.size() == 0)
                nsi[i] = n;
            else {
                nsi[i] = st.top();
            }
            st.push(i);
        }
        // prrev smaller idx
        while (st.size() > 0) {
            st.pop();
        }
        psi[0]=-1;
        st.push(0);
        for (int i = 1 ; i < n ; i++) {
            while (st.size() > 0 && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.size() == 0)
                psi[i] = -1;
            else {
                psi[i] = st.top();
            }
            st.push(i);
        }
        int maxa=0;
        for(int i = 0 ; i < n ; i++ ){
            int area = arr[i]*(nsi[i]-psi[i]-1);
            maxa = max(maxa,area);
        }
        return maxa;
    }
};