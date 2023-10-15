//Leet Code 110 Balanced Binary Tree

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
    bool isBalanced(TreeNode* root) {
        int val=findDep(root);
        if(val==-1){return false;}
        return true;
    }
    int findDep(TreeNode *root){
        int ld=0,rd=0;
        if(root==NULL){return 0;}
        if(root->left!=NULL){ld=findDep(root->left);}
        if(root->right!=NULL){rd=findDep(root->right);}
        if(abs(ld-rd)>1 or ld==-1 or rd==-1){return -1;}
        return max(ld,rd)+1;
    }
};