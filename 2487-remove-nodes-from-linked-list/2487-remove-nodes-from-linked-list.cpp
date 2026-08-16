class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n = v.size();
        int maxele = -1;
        vector<int>ans;
        for(int i = n-1  ; i>=0 ; i--){
            if(v[i]>=maxele){
                ans.push_back(v[i]);
                maxele = v[i];
            }
        }
        reverse(ans.begin(),ans.end());
        ListNode* fin = new ListNode(ans[0]);
        temp = fin;
        for(int i = 1 ; i < ans.size(); i++){
            temp->next = new ListNode(ans[i]);
            temp = temp->next;
        }
        return fin;
    }
};