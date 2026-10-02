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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        vector<int>v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        int count=0;
        for(int i=0;i<n;i++){
            count++;
            if(count%k==0){
                reverse(v.begin()+i-k+1,v.begin()+i+1);
            }
        }
        
        ListNode* dummy=new ListNode(-1);
        ListNode* prev=dummy;
        for(int i=0;i<n;i++){
            ListNode* y=new ListNode(v[i]);
            prev->next=y;
            prev=y;
        }
        return dummy->next;
    }
};