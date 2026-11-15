/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int cnt=-1;
        while(!q.empty()){
            int size=q.size();
            cnt++;
            int prev1=INT_MIN;
            int prev2=INT_MAX;
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                if(cnt%2==0){
                    if(curr->val%2!=1||(curr->val<=prev1)){
                        return 0;
                    }
                    else{
                        prev1=curr->val;
                    }
                }
                else{
                    if(curr->val%2!=0||(curr->val>=prev2)){
                        return 0;
                    }
                    else{
                        prev2=curr->val;
                    }
                }
            }

        }
        return 1;
    }
};