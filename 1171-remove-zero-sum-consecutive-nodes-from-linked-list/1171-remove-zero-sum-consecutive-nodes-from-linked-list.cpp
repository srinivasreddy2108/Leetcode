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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        vector<bool>mark(n,1);
        for(int i=0;i<n;i++){
            int sum=0;
            int store=i;
            for(int j=i;j<n;j++){
                if(mark[j]==1){
                    sum+=v[j];
                    store=j;
                }
                if(sum==0){
                for(int k=i;k<=store;k++){
                    mark[k]=0;
                }
                }
            }
            
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* prev=dummy;
        for(int i=0;i<n;i++){
            if(mark[i]==1){
                ListNode* y=new ListNode(v[i]);
                prev->next=y;
                prev=y;
            }
        }
        return dummy->next;
    }
};