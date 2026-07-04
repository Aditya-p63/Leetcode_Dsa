class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* NEXT = head;
        while (curr != NULL) {
            NEXT = curr->next;
            curr->next = prev;
            prev = curr;
            curr = NEXT;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* c = new ListNode(10);
        ListNode* temp = head;
        ListNode* tempc = c;
        while (temp) {
            ListNode* node = new ListNode(temp->val);
            tempc->next = node;
            temp = temp->next;
            tempc = tempc->next;
        }
        c = c->next;
        c=reverse(c);
        ListNode* a =head;
        ListNode* b =c;
        while(a){
            if(a->val!=b->val)  return false;
            a=a->next;
            b=b->next;
        }
        return true;

    }
};