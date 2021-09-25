// 701. Insert into a Binary Search Tree
// https://leetcode.com/problems/insert-into-a-binary-search-tree/
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr) return new TreeNode(val) ;
        if(root->val > val ) root->left = insertIntoBST(root->left,val) ;
        if(root->val < val ) root->right = insertIntoBST(root->right,val) ;
        return root ;
    }
};

// 700. Search in a Binary Search Tree
// https://leetcode.com/problems/search-in-a-binary-search-tree/
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *ans = nullptr ;
        if(root == nullptr ) return root ;
        if(root->val == val ) return root ;
        if(root ->val > val ) ans = searchBST(root->left ,val ) ;
        else if(root ->val < val ) ans = searchBST(root->right ,val ) ;
        return ans ;
    }
};