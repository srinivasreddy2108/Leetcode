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
    unordered_map<int,int>mpp;
    void callsum(TreeNode* curr,int & sum){
        if(curr==NULL){
            return ;
        }
        sum+=curr->val;
        callsum(curr->left,sum);
        callsum(curr->right,sum);
    }
    void traversal(TreeNode* root){
        if(root==NULL){
            return ;
        }
        int sum=0;
        callsum(root,sum);
        mpp[sum]+=1;
        traversal(root->left);
        traversal(root->right);
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        traversal(root);
        int maxi=INT_MIN;
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