class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // edge case: list has 0 or 1 node
        if (head == NULL || head->next == NULL) {
            return NULL; // just return, no delete
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        // move slow by 1, fast by 2
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // unlink the middle node
        prev->next = slow->next;

        return head;
    }
};
