//Leet Code 124 Binary Tree Maximum Path Sum

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN;
        int ans=maxPS(root,mx);
        return max(ans,mx);
    }
    int maxPS(TreeNode* root, int &mx){
        if(root==NULL){return 0;}
        int l=0,r=0;
        int value=root->val;
        if(root->left!=NULL){l=max(0,maxPS(root->left,mx));}
        if(root->right!=NULL){r=max(0,maxPS(root->right,mx));}
        mx=max(mx,(l+r+value));
        return value+max(l,r);
    }
};