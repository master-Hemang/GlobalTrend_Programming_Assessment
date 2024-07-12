#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxPathSumHelper(root, maxSum);
        return maxSum;
    }
    
private:
    int maxPathSumHelper(TreeNode* node, int &maxSum) {
        if (!node) return 0;

        // Recursively get the maximum path sum of the left and right subtrees
        int leftMax = max(0, maxPathSumHelper(node->left, maxSum));
        int rightMax = max(0, maxPathSumHelper(node->right, maxSum));

        // Current path sum including the current node
        int currentPathSum = node->val + leftMax + rightMax;

        // Update the overall maximum path sum
        maxSum = max(maxSum, currentPathSum);

        // Return the maximum path sum that can be extended to the parent
        return node->val + max(leftMax, rightMax);
    }
};

int main() {
    TreeNode *root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    cout << "Maximum Path Sum: " << sol.maxPathSum(root) << endl;

    return 0;
}
