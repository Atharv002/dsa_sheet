//Leet Code 543 Diameter of Binary Tree

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
    int diameterOfBinaryTree(TreeNode* root) {
        int dep=0;
        return max(maxdepth(root,dep),dep);
    }
    int maxdepth(TreeNode* root, int &dep){
        if(root==NULL){return 0;}
        int left=0,right=0;
        if(root->left!=NULL){left=1+maxdepth(root->left,dep);}
        if(root->right!=NULL){right=1+maxdepth(root->right,dep);}
        dep=max(dep,left+right);
        return max(left,right);
    }
};