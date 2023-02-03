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
    ListNode* reverseList(ListNode* head) {
    if (head == NULL)return head;
	// Store Nodes in Stack
	stack<ListNode*>st;
	ListNode* tmp = head;
	while (tmp != NULL) {
		st.push(tmp);
		tmp = tmp->next;
	}
	// We want to make head point to top of satck so
	tmp = st.top(); head = tmp;
	while (!st.empty()) {
		tmp->next = st.top();
		st.pop();
		tmp = tmp->next;
	}
	tmp->next = NULL;
    return head;
    }
};