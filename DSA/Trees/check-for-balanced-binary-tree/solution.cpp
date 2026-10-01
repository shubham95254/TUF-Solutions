/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
public:
    int balancedHeight(TreeNode* node) {
        if(!node) return 0;

        int left = balancedHeight(node->left);
        int right = balancedHeight(node->right);

        if(left==-1 || right==-1) return -1;
        if(abs(right-left)>1) return -1;

        return 1+max(right, left);
    }
    bool isBalanced(TreeNode *root){
    	int height = balancedHeight(root);
        return (height!=-1);
    }
};