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

        void traverse(TreeNode* node, vector<int>& ans){
            if(node->left) {
                traverse(node->left, ans);
            }
            ans.push_back(node->data);
            if(node->right) {
                traverse(node->right, ans);
            }
        }
		vector<int> inorder(TreeNode* root){
	        vector<int> ans ;
             traverse(root, ans);
             return ans;
		}
};