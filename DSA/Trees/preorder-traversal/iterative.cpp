
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
    vector<int> preorder(TreeNode* root) {
        vector<int> preorderTraversal;

        stack<TreeNode*> st;
        if(root) st.push(root); //have to check if root is null or not

        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();

            preorderTraversal.push_back(node->data);

            if (node->right) st.push(node->right);
            if (node->left) st.push(node->left);
        }
        return preorderTraversal;
    }
};