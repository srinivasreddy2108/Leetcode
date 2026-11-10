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
    void traversal(TreeNode* mover,vector<int>&v){
        if(mover==NULL){
            return ;
        }
        v.push_back(mover->val);
        traversal(mover->left,v);
        traversal(mover->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        traversal(root1,v);
        traversal(root2,v);
        sort(v.begin(),v.end());
        return v;
    }
};