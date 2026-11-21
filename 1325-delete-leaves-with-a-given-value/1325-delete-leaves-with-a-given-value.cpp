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
    void traverse(TreeNode* &root,int x,bool & flag){
        if(root==NULL){
            return ;
        }
        if(root->left==NULL&&root->right==NULL&&root->val==x){
            flag=1;
           
            root=NULL;
            return ;
        }
        if(root->left&&(root->left->left==NULL&&root->left->right==NULL)&&root->left->val==x){
            
            root->left=NULL;
            flag=1;
        }
        if(root->right&&(root->right->left==NULL&&root->right->right==NULL)&&root->right->val==x){
            
            root->right=NULL;
            flag=1;
        }
        traverse(root->left,x,flag);
        traverse(root->right,x,flag);
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        while(1){
            bool flag=0;
            traverse(root,target,flag);
            if(flag==0){
                break;
            }
        }
        return root;
    }
};