class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        bool exor=0;
        int n=derived.size();
        for(int i=0;i<n;i++){
            exor^=derived[i];
        }
        return exor==0;
    }
};