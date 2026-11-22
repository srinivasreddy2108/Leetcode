/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*>q;
        q.push(root);
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++){
                Node* curr=q.front();
                v.push_back(curr->val);
                q.pop();
                for(int j=0;j<curr->children.size();j++){
                    if(curr->children[j]){
                        q.push(curr->children[j]);
                    }
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};