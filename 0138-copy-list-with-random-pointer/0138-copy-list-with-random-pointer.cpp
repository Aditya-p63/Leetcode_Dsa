class Solution {
public:
    void insertCopyInBetween(Node* head) {
        Node* temp = head;

        while (temp != NULL) {
            Node* nextNode = temp->next;

            Node* copy = new Node(temp->val);

            temp->next = copy;
            copy->next = nextNode;

            temp = nextNode;
        }
    }

    void connectRandomPointers(Node* head) {
        Node* temp = head;

        while (temp != NULL) {
            Node* copyNode = temp->next;

            if (temp->random)
                copyNode->random = temp->random->next;

            temp = temp->next->next;
        }
    }

    Node* getDeepCopyList(Node* head) {
        Node* temp = head;
        Node* dummy = new Node(0);
        Node* res = dummy;

        while (temp != NULL) {
            res->next = temp->next;
            res = res->next;

            temp->next = temp->next->next;
            temp = temp->next;
        }

        return dummy->next;
    }

    Node* copyRandomList(Node* head) {
        if (head == NULL)
            return NULL;

        insertCopyInBetween(head);
        connectRandomPointers(head);

        return getDeepCopyList(head);
    }
};