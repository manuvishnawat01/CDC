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

    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* fut = NULL;
        ListNode* curr = head;
        while(curr){
            fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
        }
        head = prev;
        return head;
    }

    ListNode* doubleIt(ListNode* head) {
        
        head = reverse(head);
        ListNode* curr = head;
        int carry = 0;

            while(curr){
                int val = curr->val*2 + carry;
                curr->val = val%10;
                carry = val/10;
                curr = curr->next;
            }

            head = reverse(head);
            
            if(carry){
                ListNode* node = new ListNode(carry);
                node->next = head;
                head = node;
            }
    return head;
    }
};