class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(!head || left == right) return head;

        ListNode* curr = head;
        ListNode* prev = NULL;

        for(int i = 1; i < left; i++){
            prev = curr;
            curr = curr->next;
        }

        ListNode* con = prev;
        ListNode* tail = curr;

        ListNode* next = NULL;

        for(int i = 0; i <= right-left; i++){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        if(con != NULL)
            con->next = prev;
        else
            head = prev;

        tail->next = curr;

        return head;
    }
};