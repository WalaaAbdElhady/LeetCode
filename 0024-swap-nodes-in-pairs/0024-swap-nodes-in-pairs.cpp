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
    ListNode* swapPairs(ListNode* head) {
        ListNode* tmp = new ListNode(0, head);
        ListNode* prev = tmp, * cur = head;
        
        while (cur && cur->next) {
            // save pointers
            ListNode* nextPair = cur->next->next;
            ListNode* nextNum = cur->next;
            // swap
            nextNum->next = cur;
            cur->next = nextPair;
            prev->next = nextNum;
            // update pointers
            prev = cur;
            cur = nextPair;
        }
        return tmp->next;
    }
};