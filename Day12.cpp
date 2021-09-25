//226. Invert Binary Tree
// https://leetcode.com/problems/invert-binary-tree/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return root ;
       
        TreeNode *temp = root->left ;
        root->left = root->right ;
        root->right = temp ;
        
        if(root->left) invertTree(root->left);
        if(root->right) invertTree(root->right);
  
        return root ;         
        
    }
};



// 112. Path Sum
// https://leetcode.com/problems/path-sum/
 bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false ;
        }
        
        if(root->val == targetSum and root->left == NULL and root ->right ==NULL){
            return true ;
        }
        
       return hasPathSum(root->left,targetSum-(root->val)) ||   hasPathSum(root->right,targetSum-(root->val));
      
    }