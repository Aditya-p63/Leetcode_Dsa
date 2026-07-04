class Solution {
public:
    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = reverseLL(slow->next);
        ListNode* first = head;
        ListNode* second = newHead;
        while (second != NULL) {
            if (first->val != second->val) {
                return false;
            }

            first = first->next;
            second = second->next;
        }
        return true;
    }
};