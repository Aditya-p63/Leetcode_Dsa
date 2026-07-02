class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* n = new ListNode(-1);
        ListNode* tempn = n;
        while (list1 != NULL && list2 != NULL) {
            int a = list1->val;
            int b = list2->val;
            if (a <= b) {
                ListNode* temp = new ListNode(a);
                tempn->next = temp;
                tempn = tempn->next;
                list1 = list1->next;
            } else {
                ListNode* temp = new ListNode(b);
                tempn->next = temp;
                tempn = tempn->next;
                list2 = list2->next;
            }
        }
        if (list1 != NULL) {
            tempn->next = list1;
        }
        if (list2 != NULL) {
            tempn->next = list2;
        }
        return n->next;
    }
};