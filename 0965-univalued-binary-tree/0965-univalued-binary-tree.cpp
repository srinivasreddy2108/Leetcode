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
    int sum=0;
    int cnt=0;
    void traversal(TreeNode* root){
        if(root==NULL){
            return ;
        }
        sum+=root->val;
        cnt++;
        traversal(root->left);
        traversal(root->right);
    }
    bool isUnivalTree(TreeNode* root) {
        traversal(root);
        if(sum==root->val*cnt){
            return 1;
        }
        return 0;
    }
};