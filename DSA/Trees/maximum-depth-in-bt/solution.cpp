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
        if(node==NULL) return 0;
        int l = calculateHeight(node->left);
        int r = calculateHeight(node->right);

        return 1+max(l, r);
    }
    int maxDepth(TreeNode* root) {
        return calculateHeight(root);
    }
};