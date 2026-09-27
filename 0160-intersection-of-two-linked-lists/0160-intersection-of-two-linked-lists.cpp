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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,bool>mpp;
        ListNode* temp=headA;
        while(temp){
            mpp[temp]=1;
            temp=temp->next;
        }
        ListNode* temp2=headB;
        while(temp2){
            if(mpp[temp2]){
                return temp2;
            }
            temp2=temp2->next;

        }
        return nullptr;
    }
};