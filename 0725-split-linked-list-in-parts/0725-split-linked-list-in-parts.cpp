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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size=0;
        ListNode* tmp=head;
        while(tmp)tmp=tmp->next,size++;
        int parts=size/k,rem=size%k;
        ListNode* cur=head,*prev=NULL;
        vector<ListNode*> ans(k,NULL);
        int i=0;
        while(cur && i<k){
            ans[i]=cur;
            for(int j=0;j<parts+(rem>0);j++){
                prev=cur;
                cur=cur->next;
            }
            prev->next=NULL;
            i++,rem--;
        }
        return ans;
    }
};