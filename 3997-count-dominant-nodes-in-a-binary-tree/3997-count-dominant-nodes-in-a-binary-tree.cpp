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
    void check(TreeNode* curr,bool & flag,int value){
        if(curr==NULL){
            return ;
        }
        if(curr->val>value){
            flag=0;
            return ;
        }
        check(curr->left,flag,value);
        check(curr->right,flag,value);

    }
    void traversal(TreeNode* root){
        if(root==NULL){
            return ;
        }
        bool flag=1;
        int value=root->val;
        check(root,flag,value);
        if(flag==1){
            cnt++;
        }
        traversal(root->left);
        traversal(root->right);
    }
    int countDominantNodes(TreeNode* root) {
        traversal(root);
        return cnt;
    }
};