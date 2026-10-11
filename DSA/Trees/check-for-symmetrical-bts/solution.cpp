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
    bool checkMirror (TreeNode* node1, TreeNode* node2) {
        if(node1==NULL && node2==NULL) return true;
        if(node1==NULL ^ node2==NULL) return false;

        if(node1->data!=node2->data) return false;
        return (checkMirror(node1->left, node2->right) && checkMirror(node1->right, node2->left));
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return checkMirror(root->left, root->right);
    }
};