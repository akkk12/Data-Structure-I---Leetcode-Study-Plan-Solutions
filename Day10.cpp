// 144. Binary Tree Preorder Traversal
// https://leetcode.com/problems/binary-tree-preorder-traversal/

void preOrder(TreeNode*root, vector<int> &ans){
    if(root == nullptr ) return ;
    ans.push_back(root->val);
    preOrder(root->left,ans) ;
    preOrder(root->right,ans) ;
    
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans ;
        preOrder(root,ans);
        return ans ;
        
    }


// 94. Binary Tree Inorder Traversal
// https://leetcode.com/problems/binary-tree-inorder-traversal/

void inOrder(TreeNode *root, vector<int> &ans){
    if(root == nullptr) return ;
    inOrder(root->left,ans);
    ans.push_back(root->val);
    inOrder(root->right,ans);    
    
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans ;
        inOrder(root,ans);
        return ans ;
    }


// 145. Binary Tree Postorder Traversal
// https://leetcode.com/problems/binary-tree-postorder-traversal/


 void pre(TreeNode *root,vector<int> &ans){
        if(root == nullptr) return ;
        pre(root->left,ans);
        pre(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans ;
        pre(root,ans);
        return ans ;
        
    }