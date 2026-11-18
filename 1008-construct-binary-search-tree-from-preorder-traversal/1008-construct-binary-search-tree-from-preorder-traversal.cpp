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
    TreeNode* bstFromPreorder(vector<int>& p) {
        int n=p.size();
        TreeNode* root=new TreeNode(p[0]);
        for(int i=1;i<n;i++){
            TreeNode* curr=root;
            while(1){
                if(p[i]<curr->val){
                    if(curr->left){
                        curr=curr->left;
                    }
                    else{
                        curr->left=new TreeNode(p[i]);
                        break;
                    }
                }
                else{
                    if(curr->right){
                        curr=curr->right;
                    }
                    else{
                        curr->right=new TreeNode(p[i]);
                        break;
                    }
                }
            }
        }
        return root;
    }
};