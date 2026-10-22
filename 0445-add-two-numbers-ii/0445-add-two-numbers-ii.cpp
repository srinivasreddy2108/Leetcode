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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        vector<int>v1;
        vector<int>v2;
        while(temp1){
            v1.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2){
            v2.push_back(temp2->val);
            temp2=temp2->next;
        }
        int i=v1.size()-1;
        int j=v2.size()-1;
        int carry=0;
        vector<int>ans;
        while(i>=0&&j>=0){
            int num=v1[i]+v2[j]+carry;
            int sum=num%10;
            ans.push_back(sum);
            carry=num/10;
            i--;
            j--;
        }
        while(i>=0){
            int num=v1[i]+carry;
            int sum=num%10;
            ans.push_back(sum);
            carry=num/10;
            i--;
        }
        while(j>=0){
            int num=v2[j]+carry;
            int sum=num%10;
            ans.push_back(sum);
            carry=num/10;
            
            j--;
        }
        if(carry){
            ans.push_back(carry);
        }
        
        int n=ans.size();
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        ListNode* head=new ListNode(ans[n-1]);
        ListNode* prev=head;
        for(int i=n-2;i>=0;i--){
            ListNode* temp=new ListNode(ans[i]);
            prev->next=temp;
            prev=temp;
        }
        return head;
    }
};