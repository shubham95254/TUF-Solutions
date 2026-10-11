/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
public:
    bool checkSum(TreeNode* node) {
        if(node==NULL) return true;
        if(!checkSum(node->left) || !checkSum(node->right)) return false;
        
        if(!node->left && !node->right) return true;

        int l = 0, r = 0;
        if(node->left!=NULL) l = node->left->val;
        if(node->right!=NULL) r = node->right->val;

        return(node->val==l+r);
    }
    bool checkChildrenSum(TreeNode* root) {
        return checkSum(root);
    }
};
