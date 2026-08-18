class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp = head;
        int n = nums.size();
        unordered_set<int>s;
        for(int i = 0 ; i < n ;i++){
            s.insert(nums[i]);
        }
        ListNode* ans = new ListNode(10);
        ListNode* temp2 = ans;
        while(temp!=nullptr){
            if(s.find(temp->val)==s.end()){
                temp2->next = new ListNode(temp->val);
                temp2=temp2->next;
            }
            temp=temp->next;
        }
        return ans->next;
    }
};