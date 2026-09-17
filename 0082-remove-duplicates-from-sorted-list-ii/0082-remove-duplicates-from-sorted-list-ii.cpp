class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0, head);      // dummy anchors the list
        ListNode* prev = &dummy;      // prev = last confirmed unique node
        ListNode* current = head;

        while (current != nullptr) {
            if (current->next != nullptr &&
                current->val == current->next->val) {
                int dupVal = current->val;
                while (current != nullptr && current->val == dupVal)
                    current = current->next;   // skip whole duplicate block
                prev->next = current;          // cut the block out
            } else {
                prev = current;                // this node is unique
                current = current->next;
            }
        }
        return dummy.next;
    }
};