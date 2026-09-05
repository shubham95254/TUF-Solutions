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
    vector<vector<int>> treeTraversal(TreeNode* root) {
        vector<vector<int>> traversals(3);
        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});
        while (!st.empty()) {
            TreeNode* node = st.top().first;
            int num = st.top().second;
            st.pop();

            if (num == 1) {
                traversals[1].push_back(node->data);//preorder
                num++;
                st.push({node, num});
                if (node->left != NULL) st.push({node->left, 1});
            } else if (num == 2) {
                traversals[0].push_back(node->data);//inorder
                num++;
                st.push({node, num});
                if (node->right != NULL) st.push({node->right, 1});
            } else {
                traversals[2].push_back(node->data);//postorder
                num++;
            }
        }
        return traversals;
    }
};