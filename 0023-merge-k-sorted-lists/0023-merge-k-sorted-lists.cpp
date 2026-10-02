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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0;i<lists.size();i++){
            ListNode* head=lists[i];
            while(head!=NULL){
                pq.push(head->val);
                head=head->next;
            }
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* prev=dummy;
        while(!pq.empty()){
            ListNode* y=new ListNode(pq.top());
            prev->next=y;
            prev=y;
            pq.pop();
        }
        return dummy->next;
    }
};