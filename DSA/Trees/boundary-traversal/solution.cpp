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
    bool isLeaf(TreeNode* node) {
        if (node->left || node->right) return false;
        return true;
    }
    bool traverseLeft(TreeNode* node, vector<int>& lb, vector<int>& leaves,
                      bool leafCame) {
        if (!leafCame) {
            if (!isLeaf(node))
                lb.push_back(node->data);
            else
                leafCame = true;
        }
        if (isLeaf(node)) {
            leaves.push_back(node->data);
        }
        if (node->left)
            leafCame = traverseLeft(node->left, lb, leaves, leafCame);
        if (node->right)
            leafCame = traverseLeft(node->right, lb, leaves, leafCame);
        return leafCame;
    }
    bool traverseRight(TreeNode* node, vector<int>& rb, vector<int>& leaves,
                       bool leafCame) {
        if (!leafCame) {
            if (!isLeaf(node))
                rb.push_back(node->data);
            else
                leafCame = true;
        }
        if (isLeaf(node)) {
            leaves.push_back(node->data);
        }
        if (node->right)
            leafCame = traverseRight(node->right, rb, leaves, leafCame);
        if (node->left)
            leafCame = traverseRight(node->left, rb, leaves, leafCame);
        return leafCame;
    }

    vector<int> boundary(TreeNode* root) {
        vector<int> ans, lb, rb, leaves;
        if (!root) return ans;

        ans.push_back(root->data);

        // left boundary
        if (root->left) traverseLeft(root->left, lb, leaves, 0);
        for (auto it : lb) {
            ans.push_back(it);
        }
        for (auto it : leaves) {
            ans.push_back(it);
        }
        leaves = {};

        // right boundary
        if (root->right) traverseRight(root->right, rb, leaves, 0);
        for (int i = leaves.size() - 1; i >= 0; i--) {
            ans.push_back(leaves[i]);
        }
        for (int i = rb.size() - 1; i >= 0; i--) {
            ans.push_back(rb[i]);
        }
        return ans;
    }
};