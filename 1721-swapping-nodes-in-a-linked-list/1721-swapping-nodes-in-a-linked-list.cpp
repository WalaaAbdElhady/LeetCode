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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left=head;
        ListNode* right=head;
        ListNode* cur=head;
        int idx=1;
        while(cur){
            cur=cur->next;
            if(idx>k)right=right->next;
            if(idx<k)left=left->next;
            idx++;
        }
        swap(left->val, right->val);
        return head;
    }
};