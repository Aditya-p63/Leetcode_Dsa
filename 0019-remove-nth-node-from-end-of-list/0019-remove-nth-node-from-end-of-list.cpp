class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        cout << size;
        temp = head;
        if (size == n) {
            return head->next;
        }
        size = size - n;
        for (int i = 1; i < size; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};