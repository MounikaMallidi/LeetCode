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
 class BSTIterator {
public:
    stack<TreeNode*> st;
    bool reverse;
    BSTIterator(TreeNode* root,bool isReverse) {
        reverse=isReverse;
        pushAll(root);
    }
    
    int next() {
        TreeNode* node=st.top();
        st.pop();
        if(reverse){
            pushAll(node->left);
        }
        else{
            pushAll(node->right);
        }
        return node->val;
    }
    
    void pushAll(TreeNode* root){
        while(root){
            st.push(root);
            if(reverse){
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;

        BSTIterator left(root,false);
        BSTIterator right(root,true);

        int i=left.next();
        int j=right.next();
        while(i<j){
            int sum=i+j;
            if(sum==k) return true;
            else if(sum<k) i=left.next();
            else j=right.next();
        }
        return false;
    }
    
};