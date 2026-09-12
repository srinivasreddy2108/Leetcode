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
        ListNode* temp=head;
        vector<int>v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=v.size()-1;
        ListNode* dummy=new ListNode(-1);
        ListNode* prev=dummy;
        while(i<j){
            ListNode* x=new ListNode(v[i]);
            ListNode* y=new ListNode(v[j]);
            x->next=y;
            prev->next=x;
            prev=y;
            i++;
            j--;
        }
        if(i==j){
        ListNode* last=new ListNode(v[i]);
        prev->next=last;
        }
        ListNode* start=dummy->next;
        temp=head;
        while(start){
            temp->val=start->val;
            start=start->next;
            temp=temp->next;
        }
    }
};