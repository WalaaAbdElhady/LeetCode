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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (head->next == NULL)return NULL;
    ListNode* L = head;
    ListNode* R = head;
    while (n--) {
        R = R->next;
    }
    if (R == NULL)return head->next;
    while (R->next != NULL) {
        R = R->next;
        L = L->next;
    }
    L->next = L->next->next;
    return head;
}
};