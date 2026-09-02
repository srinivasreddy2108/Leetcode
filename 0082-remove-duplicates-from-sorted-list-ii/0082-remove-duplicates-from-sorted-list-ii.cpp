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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        unordered_map<int,int>mpp;
        while(temp){
            mpp[temp->val]++;
            temp=temp->next;
        }
        vector<int>v;
        for(auto it =mpp.begin();it!=mpp.end();it++){
            if(it->second==1){
                v.push_back(it->first);
            }
            
        }
        ListNode* dup=new ListNode(-1);
        ListNode*  prev=dup;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            ListNode* y=new ListNode(v[i]);
            prev->next=y;
            prev=y;
        }
        return dup->next;
    }
};