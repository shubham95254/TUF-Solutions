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
		vector<int> postorder(TreeNode* root){
	        //form rootRL then reverse it

            vector<int> postOrderTraversal;

            stack<TreeNode*> st;
            st.push(root);
            while(!st.empty()) {
                TreeNode* node = st.top();
                st.pop();
                postOrderTraversal.push_back(node->data);

                if(node->left!=NULL) st.push(node->left);
                if(node->right!=NULL) st.push(node->right);
            }
            // int n =postOrderTraversal.size();
            // for(int i=0;i<n/2; i++) {
            //     swap(postOrderTraversal[i], postOrderTraversal[n-i-1]);
            // }

            reverse(postOrderTraversal.begin(),postOrderTraversal.end());

            return postOrderTraversal;
		}
};