class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* temp = head;

        unordered_map<ListNode*, int> nodeMap;

        while (temp != nullptr) {
            if (nodeMap.find(temp) != nodeMap.end()) {
                return temp;
            }

            nodeMap[temp] = 1;
            temp = temp->next;
        }

        return NULL;
    }
};