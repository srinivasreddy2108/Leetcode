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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        vector<int>store;
        for(int i=0;i<n;i++){
            int maxi=v[i];
            int flag=0;
            for(int j=i+1;j<n;j++){
                if(v[j]>maxi){
                    store.push_back(v[j]);
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                store.push_back(0);
            }
        }
        return store;
    }

};