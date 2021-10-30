class Solution {
public:
    
    void dfs(TreeNode* root ,vector<int> &v)
    {
        if(root ==  nullptr)
            return;
         dfs(root->left , v);
        
       
        dfs(root->right , v);
        v.push_back(root->val);
        // return v;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        dfs(root, v);
        return v;
        
    }
};