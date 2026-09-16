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
    int calculateHeight(TreeNode* node) {
        int l = 0, r = 0;
        if(node->left) l = calculateHeight(node->left);
        if(node->right) r = calculateHeight(node->right);

        return 1+max(l, r);
    }
    int maxDepth(TreeNode* root) {
        return calculateHeight(root);
    }
};