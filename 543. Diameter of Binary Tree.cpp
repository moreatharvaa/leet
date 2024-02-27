class Solution {
public:
    int solve(TreeNode* root, int& result) {
        if (root == nullptr) {
            return 0; // Return 0 if the current node is null
        }

        int left = solve(root->left, result);
        int right = solve(root->right, result);

        result = max(result, left + right);

        // Return the maximum depth of the subtree rooted at the current node
        return max(left, right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0; // Return 0 if the tree is empty
        }

        int result = INT_MIN;
        solve(root, result);
        return result;
    }
};
