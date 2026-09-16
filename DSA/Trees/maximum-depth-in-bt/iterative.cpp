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
    int maxDepth(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        int level = 1;
        while(!q.empty()) {
            auto [node, currLevel] = q.front();
            q.pop();
            if(node->left!=NULL) q.push({node->left, currLevel+1});
            if(node->right!=NULL) q.push({node->right, currLevel+1});

            level = currLevel;
        }
        return level;
    }
};