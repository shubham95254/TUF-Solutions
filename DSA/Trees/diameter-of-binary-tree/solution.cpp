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
    int findDia(TreeNode* node, int &maxi){
        if(!node) return 0;

        int left = findDia(node->left, maxi);
        int right = findDia(node->right, maxi);

        maxi = max(maxi, left+right);
        return 1+max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxi  = 0;
        findDia(root, maxi);
        return maxi;
    }
};