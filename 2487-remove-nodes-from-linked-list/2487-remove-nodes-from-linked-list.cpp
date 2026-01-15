class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        while(head){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);

        int maxSoFar = INT_MIN;  
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr) {
            if(curr->val >= maxSoFar) {
                maxSoFar = curr->val;
                prev = curr;
                curr = curr->next;
            } 
            else{
                prev->next = curr->next;
                curr = curr->next;
            }
        }
        return reverse(head);
    }
};
