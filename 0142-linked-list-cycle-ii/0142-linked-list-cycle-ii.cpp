class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;        
        ListNode* fast = head;
        while(fast != nullptr && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                slow = head;
                while(fast!=slow){
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow;
            }
        }        
        return NULL;
    }
};