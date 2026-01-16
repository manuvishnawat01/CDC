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
    ListNode* reverseKGroup(ListNode* head1, int k) {
        vector<int> arr;
        ListNode* trav = head1;
        while(trav != NULL){
            arr.push_back(trav->val);
            trav = trav->next;
        }
        int n = arr.size();
        for(int i = 0; i + k <= n; i += k){
        int left = i, right = i + k - 1;
        while(left < right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
            }
        }

    
        ListNode* head = new ListNode(arr[0]);
        ListNode* curr = head;

        for(int i = 1; i<arr.size(); i++){
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }
        return head;
    }
};