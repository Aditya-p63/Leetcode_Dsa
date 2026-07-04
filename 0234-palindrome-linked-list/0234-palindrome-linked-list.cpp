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
        //method 2
        // ListNode* c = new ListNode(10);
        // ListNode* temp = head;
        // ListNode* tempc = c;
        // while (temp) {
        //     ListNode* node = new ListNode(temp->val);
        //     tempc->next = node;
        //     temp = temp->next;
        //     tempc = tempc->next;
        // }
        // c = c->next;
        // c=reverse(c);
        // ListNode* a =head;
        // ListNode* b =c;
        // while(a){
        //     if(a->val!=b->val)  return false;
        //     a=a->next;
        //     b=b->next;
        // }
        // return true;

        //method 3

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* right = reverse(slow->next);
        ListNode* a = head;
        ListNode* b = right;
        while(b){
            if(a->val!=b->val) return false;
            a=a->next;
            b=b->next;
        }
        return true;

    }
};