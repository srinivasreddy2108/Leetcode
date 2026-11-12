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
    int cnt=0;
    void sum(TreeNode* curr,int &summ,int &count){
        if(curr==NULL){
            return ;
        }
        summ+=curr->val;
        count++;
        sum(curr->left,summ,count);
        sum(curr->right,summ,count);
    }
    void preorder(TreeNode* root){
        if(root==NULL){
            return ;
        }
        int summ=0;
        int count=0;
        sum(root,summ,count);
        if(summ/count==root->val){
            cnt++;
        }
        preorder(root->left);
        preorder(root->right);
    }
    int averageOfSubtree(TreeNode* root) {

        preorder(root);
        return cnt;
    }
};