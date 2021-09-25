// 102. Binary Tree Level Order Traversal
// https://leetcode.com/problems/binary-tree-level-order-traversal/
class Solution {
public:
    vector<vector<int>>  levelOrder_(TreeNode* root) {
     queue<TreeNode*> q ;
     vector<vector<int>> ans ;
    int level = 0 ;
         q.push(root);
        while(!q.empty()) {
            vector<int> smallAns ;
            int size = q.size() ;
            while(size--){
            TreeNode* top = q.front();
            q.pop() ;
             smallAns.push_back(top->val);  
            cout << top->val << " " ; 
            if(top->left) q.push(top->left);
            if(top->right) q.push(top->right);
        }
        level++; 
         ans.push_back(smallAns);}
       return ans ;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {} ;
        return levelOrder_(root);
    }
};

// 104. Maximum Depth of Binary Tree
// https://leetcode.com/problems/maximum-depth-of-binary-tree/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr ) return 0 ;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        return max(lh,rh) + 1 ;
        
    }
};

// 101. Symmetric Tree
// https://leetcode.com/problems/symmetric-tree/
class Solution {
public:
    bool isSymmetric(TreeNode* root,TreeNode*root2) {
        if(root == nullptr && root2 == nullptr ) return true ;
        if(root == nullptr || root2 == nullptr ) return false ;
        if(root->val == root2->val && isSymmetric(root->left,root2->right) && isSymmetric(root2->left,root->right))  
        return true ;
        
        return false ;
    }
    bool isSymmetric(TreeNode* root) {
        return isSymmetric(root,root) ;
    }
};