class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Remove all nodes from the beginning that match
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // Now traverse and remove remaining matching nodes
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while (temp != nullptr) {
            if (temp->val == val) {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;  // Only update temp, not prev
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};
