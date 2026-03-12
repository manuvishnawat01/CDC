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
    
    ListNode* reverseList(ListNode* head) {
            ListNode* prev = nullptr;
            ListNode* curr = head;
            while (curr != nullptr) {
                ListNode* next_node = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next_node;
            }
            return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
 
    ListNode* head2 = reverseList(slow);

    int sum = 0;
        while(head2 != NULL){
            int curr = head->val + head2->val;
            sum = max(sum,curr);
            head = head->next;
            head2 = head2->next;
            }
        return sum;
    }
};