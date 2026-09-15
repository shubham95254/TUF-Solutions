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
    vector<int> inorder(TreeNode* root) {
        vector<int> inorderTraversal;
        stack<TreeNode*> st;
        TreeNode* node = root;

        while (true) {
            if (node != NULL) {
                st.push(node);
                node = node->left;
            } else {
                //check if we reached to end of tree
                if(st.empty()) break;
                node = st.top();
                st.pop();
                inorderTraversal.push_back(node->data);
                node= node->right;

            }

        }
        return inorderTraversal;
    }
};