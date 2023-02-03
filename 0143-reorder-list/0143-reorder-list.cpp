/*
    Given head of linked-list, reorder list alternating outside in
    Ex. head = [1,2,3,4] -> [1,4,2,3], head = [1,2,3,4,5] -> [1,5,2,4,3]

    Find middle node, split in half, reverse 2nd half of list, merge

    Time: O(n)
    Space: O(1)
*/

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
    void reorderList(ListNode* head) {
        if (head->next == NULL) {
            return;
        }
        ListNode* first = head;
        ListNode* second = head;
        ListNode* prev = NULL;
        while (first != NULL && first->next != NULL) {
            prev = second;
            second = second->next;
            first = first->next->next;
        }
        prev->next = NULL;
        first = head;
        ListNode* l1 = first;
        ListNode* l2 = reverseList(second);
        mergeTwoLists(l1,l2);
    }
private:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL)return head;
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* next = cur->next;
        while (cur != NULL) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    void mergeTwoLists(ListNode* l1, ListNode* l2) {
        while (l2 != NULL) {
            ListNode* p1 = l1->next;
            ListNode* p2 = l2->next;

            l1->next = l2;
            if (p1 == NULL) {
                break;
            }
            l2->next = p1;

            l1 = p1;
            l2 = p2;

        }
    }
};