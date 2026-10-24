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
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        vector<vector<int>> ans;
        vector<int> tmp;
        q.push({root, 0});
        int curLevel = 0;
        while(!q.empty()){
            TreeNode* node = q.front().first;
            int lvl = q.front().second;
            q.pop();
            if(lvl>curLevel){
                if(curLevel%2!=0) reverse(tmp.begin(), tmp.end());
                ans.push_back(tmp);
                tmp = {};
                curLevel++;
            }
            tmp.push_back(node->data);
            if(node->left) q.push({node->left, curLevel+1});
            if(node->right) q.push({node->right, curLevel+1});
        }

        if(curLevel%2!=0) reverse(tmp.begin(), tmp.end());
        ans.push_back(tmp);
        
        return ans;

    }
};

