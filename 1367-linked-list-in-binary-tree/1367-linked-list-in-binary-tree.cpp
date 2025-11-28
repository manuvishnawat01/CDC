/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 * };
 *
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 * };
 */

class Solution {
public:
    bool matchList(TreeNode* treeNode, ListNode* listNode) {
        if (listNode == NULL) return true;             
        if (treeNode == NULL) return false;      
        if (treeNode->val != listNode->val) return false; 

        return matchList(treeNode->left, listNode->next) || matchList(treeNode->right, listNode->next);
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if (root == NULL) return false;
        return matchList(root, head) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
