class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode* oddDummy = new ListNode(-1);
        ListNode* evenDummy = new ListNode(-1);

        ListNode* oddTail = oddDummy;
        ListNode* evenTail = evenDummy;

        ListNode* curr = head;
        int pos = 1;

        while (curr != NULL) {
            if (pos % 2 == 1) {
                oddTail->next = curr;
                oddTail = oddTail->next;
            }
            else {
                evenTail->next = curr;
                evenTail = evenTail->next;
            }
            curr = curr->next;
            pos++;
        }
        oddTail->next = evenDummy->next;
        evenTail->next = NULL;  

        return oddDummy->next;
    }
};
