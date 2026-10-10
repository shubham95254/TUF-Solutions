/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
   public:
    int calculatemaxPathSum(TreeNode* node, int &maxSum) {
        if (node == NULL) return -1e9;

        int leftSubtreeSum = max(0, calculatemaxPathSum(node->left, maxSum));
        int rightSubtreeSum = max(0, calculatemaxPathSum(node->right, maxSum));

        int sum = leftSubtreeSum + rightSubtreeSum + node->data;

        int maxi = max(leftSubtreeSum, rightSubtreeSum);
        maxi = max(maxSum, sum);
        maxSum = max(maxSum, maxi);

        return max(leftSubtreeSum, rightSubtreeSum)+node->data;
    }
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        calculatemaxPathSum(root, maxSum);
        return maxSum;
    }
};