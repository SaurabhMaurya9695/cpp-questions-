//  we make a curr node which is pointing to null .
// we just want to validate our tree whether our bst is valid or not.
// means left node is always less than the root and vice versa for right .


class Solution {
public:
        TreeNode* curr = NULL;
        bool isValidBST(TreeNode* root) {
            if(root == NULL){
                return true;
            }
            bool left = isValidBST(root->left); // check
            if(curr != NULL){
                if(curr->val >= root->val){ return false; }
            }
            curr = root;
            bool right = isValidBST(root->right);
            return (left && right);
        }
};