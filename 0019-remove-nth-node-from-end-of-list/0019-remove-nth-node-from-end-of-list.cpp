/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* current = head;
        ListNode dummy(0,head);
        ListNode* prev=&dummy;
        while(current != nullptr){
            size++;
            current  = current -> next;
        }
        int posOfNode = size - n;
        for(int i=0;i<posOfNode;i++){
            prev = prev -> next;
        }
        ListNode* toDelete = prev -> next;
        prev -> next = toDelete -> next;
        delete toDelete;
        return dummy.next;
        
    }
};