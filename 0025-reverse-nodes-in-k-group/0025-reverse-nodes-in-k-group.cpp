class Solution {
public:
    int size(ListNode* head) {
        int cnt = 0;
        while (head) {
            cnt++;
            head = head->next;
        }
        return cnt;
    }

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

    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = size(head);
        int groups = n / k;

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while (groups--) {
            ListNode* start = head;

            for (int i = 1; i < k; i++) {
                head = head->next;
            }

            ListNode* nextGroup = head->next;
            head->next = nullptr;

            ListNode* revHead = reverseLL(start);

            tail->next = revHead;

            while (tail->next) {
                tail = tail->next;
            }

            head = nextGroup;
        }

        tail->next = head;

        return dummy->next;
    }
};