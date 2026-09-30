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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // do traversal and check at same time
        if (p == NULL || q == NULL) return (p == q);

        // doing preorder traversal
        return (p->data == q->data) && isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};