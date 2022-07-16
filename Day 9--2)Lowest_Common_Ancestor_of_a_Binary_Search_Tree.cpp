class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val<p->val and root->val<q->val)
            return lowestCommonAncestor(root->right,p,q);
        else if(root->val>p->val and root->val>q->val)
            return lowestCommonAncestor(root->left,p,q);
        return root;
    }
};

//Link--https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/