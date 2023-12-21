class Solution {
public:
    int currNum    = 0;
    int currStreak = 0;
    int maxStreak  = 0;
    vector<int> result;
    
    void dfs(TreeNode* root) {
        if(!root)
            return;
        
        dfs(root->left);
        
        if(root->val == currNum) {
            currStreak++;
        } else {
            currNum    = root->val;
            currStreak = 1;
        }
        
        if(currStreak > maxStreak) {
            result = {};
            maxStreak = currStreak;
        }
        
        if(currStreak == maxStreak) {
            result.push_back(root->val);
        }
        
        dfs(root->right);
        
    }
    
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        
        return result;
    }
};
