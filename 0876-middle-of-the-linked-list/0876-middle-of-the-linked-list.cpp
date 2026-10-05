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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp= head;
        while(temp!=nullptr){
            count=count + 1;
            temp = temp->next;
        }
        int k ;
        
            k= (count/2);
        
        temp=head;
        for(int i=0;i<k;i++){
            temp=temp->next;
        }
        ListNode* middle = temp;
        while(temp!=nullptr){
            cout << temp->val;
            temp=temp->next;
        }
        return middle;
    }
};