/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode* ,bool>mpp;
        ListNode* temp=head;

        while(temp){
            
            if(mpp[temp]){
                return 1;
            }
            mpp[temp]=1;
            temp=temp->next;
        }
        return 0;
    }
};