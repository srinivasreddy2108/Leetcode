/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* store=NULL;
    void traversal(TreeNode* cloned,TreeNode* target){
        if(cloned==NULL){
            return ;
        }
        if(cloned->val==target->val){
            store=cloned;
            return ;
        }
        traversal(cloned->left,target);
        traversal(cloned->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        traversal(cloned,target);
        return store;
    }
};