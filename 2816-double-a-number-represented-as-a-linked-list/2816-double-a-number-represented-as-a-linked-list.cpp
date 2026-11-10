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
    ListNode* doubleIt(ListNode* head) {
        stack<int>st;
        ListNode*  temp=head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(!st.empty()){
            temp->val=st.top();
            temp=temp->next;
            st.pop();
        }
        temp=head;
        int carry=0;
        while(temp){
            int mul=(temp->val*2)+carry;
            int there=mul%10;
            temp->val=there;
             carry=mul/10;
            temp=temp->next;
        }
        temp=head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(!st.empty()){
            temp->val=st.top();
            temp=temp->next;
            st.pop();
        }
        if(carry){
            ListNode* new_node=new ListNode(carry);
            new_node->next=head;
            head=new_node;
        }
        return head;

    }
};