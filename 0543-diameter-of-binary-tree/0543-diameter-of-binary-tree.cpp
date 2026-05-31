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
    int maxDepth(TreeNode* root,int &maxi) {
        if(root==NULL) return 0;
        int ls=maxDepth(root->left,maxi);
        int rs=maxDepth(root->right,maxi);
        maxi=max(maxi,ls+rs);
        return 1+max(ls,rs);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0; 
        maxDepth(root,maxi);
        return maxi;
    }
};