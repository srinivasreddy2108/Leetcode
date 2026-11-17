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
    vector<int> findMode(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        unordered_map<int,int>mpp;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                mpp[curr->val]++;
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
        }
        int maxi=0;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            maxi=max(maxi,it->second);
        }
        vector<int>v;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second==maxi){
                v.push_back(it->first);
            }
        }
        return v;
    }
};