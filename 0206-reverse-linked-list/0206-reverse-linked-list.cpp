
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL){
           ListNode* last = curr->next;
           curr->next = prev;
            prev = curr;
            curr = last;
        }
        return prev;
    }
};