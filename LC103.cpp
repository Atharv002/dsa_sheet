//Leet Code 103 Binary Tree Zig Zag Level order Traversal

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){return ans;}
        queue<TreeNode*> q;
        q.push(root);
        bool LTR=true;
        while(!q.empty()){
            int sz=q.size();
            vector <int> vec(sz);
            for(int i=0;i<sz;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL){q.push(temp->left);}
                if(temp->right!=NULL){q.push(temp->right);}
                int indx = LTR? i : sz-i-1;
                vec[indx]=temp->val;
            }
            ans.push_back(vec);
            LTR=!LTR;
        }
        return ans;
    }
    
};