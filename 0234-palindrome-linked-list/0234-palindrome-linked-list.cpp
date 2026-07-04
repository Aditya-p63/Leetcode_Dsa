class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<ListNode*>st;
        ListNode* temp = head;
        while(temp!=NULL){
            st.push(temp);
            temp = temp->next;
        }
        temp = head;
        while(temp!=NULL){
            if(temp->val != st.top()->val) return false;
            st.pop();
            temp = temp->next;
        }
        return true;
    }
};