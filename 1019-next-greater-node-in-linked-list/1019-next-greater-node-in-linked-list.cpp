class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int> a;
        while (temp != NULL) {
            a.push_back(temp->val);
            temp = temp->next;
        }
        int n = a.size();
        vector<int> ans(n);
        stack<int> at;
        ans[n - 1] = 0;
        at.push(a[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            while (at.size() > 0 && at.top() <= a[i]) {
                at.pop();
            }
            if (at.size() == 0) {
                ans[i] = 0;

            } else {
                ans[i] = at.top();
            }
            at.push(a[i]);
        }
        return ans;
    }
};