class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL)
            return NULL;
        
        if(root2 == NULL)
            return root1;
        else if(root1 == NULL)
            return root2;
        
        root1->left = mergeTrees(root1->left, root2->left);
        root1->right = mergeTrees(root1->right, root2->right);
        
        root1->val += root2->val;
        
        return root1;
        
    }
};