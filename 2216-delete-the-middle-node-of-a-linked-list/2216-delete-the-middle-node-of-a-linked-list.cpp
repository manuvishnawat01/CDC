class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        ListNode dummy(0, head);
        ListNode* prev = &dummy; 
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;       
            fast = fast->next->next; 
        }
        
        prev->next = slow->next;

        return dummy.next;
    }
};