// 98. Validate Binary Search Tree
// https://leetcode.com/problems/validate-binary-search-tree/

class Solution {
public:
     bool isValidBST_(TreeNode* root,long min , long max) {
        if(root == nullptr ) return true ;
        if(root->val > min && root->val < max){
            return isValidBST_(root->left,min,root->val) && isValidBST_(root->right,root->val,max) ;
        }
         return false ;
    }
    bool isValidBST(TreeNode* root) {
        return isValidBST_(root,LONG_MIN,LONG_MAX) ;
    }
};

// 235. Lowest Common Ancestor of a Binary Search Tree
// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

class Solution {
public:
    TreeNode *LCA = nullptr ;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode * curr = root ;
        while(curr!=nullptr){
            if(curr->val < p->val && curr->val < q->val) {
                curr = curr->right ;
            }
            else if(curr->val > p->val && curr->val > q->val) {
                curr = curr->left ;
            }
            else{
                LCA = curr ;
                break ;
            }
            
        }
        return LCA ;
    }
};

// 653. Two Sum IV - Input is a BST
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

class Solution {
public:
     bool findTarget(TreeNode* root, int k,set<int> &s) {
       if(root == nullptr) return false ;
         if(s.find(k - root->val) != s.end()) return true ;
        s.insert(root->val) ;
        return findTarget(root->left,k,s) || findTarget(root->right,k,s); 
    }
    bool findTarget(TreeNode* root, int k) {
        set<int> s ;
        return findTarget(root,k,s) ;
    }
};