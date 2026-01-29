class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* second = head;
        ListNode* curr = head;

        for(int i = 1; i < k; i++){
            first = first->next;
        }

        curr = first->next;
        while(curr != NULL){
            curr = curr->next;
            second = second->next;
        }
        swap(first->val, second->val);
        return head;
    }
};
