class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return nullptr;

        unordered_map<Node*, Node*> mp;

        Node* dummy = new Node(0);
        Node* tail = dummy;

        Node* temp = head;
        while (temp) {
            Node* copy = new Node(temp->val);

            mp[temp] = copy;
            tail->next = copy;
            tail = copy;

            temp = temp->next;
        }

        temp = head;
        while (temp) {
            if (temp->random)
                mp[temp]->random = mp[temp->random];

            temp = temp->next;
        }

        return dummy->next;
    }
};