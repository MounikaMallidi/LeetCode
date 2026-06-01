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
    TreeNode* markParents(TreeNode* root, int target,
                     unordered_map<TreeNode*, TreeNode*>& parent) {
        
        queue<TreeNode*> q;
        q.push(root);
        
        TreeNode* targetNode = NULL;
        
        while(!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            
            if(node->val == target)
                targetNode = node;
            
            if(node->left) {
                parent[node->left] = node;
                q.push(node->left);
            }
            
            if(node->right) {
                parent[node->right] = node;
                q.push(node->right);
            }
        }
        
        return targetNode;
    }
    int amountOfTime(TreeNode* root, int target) {
        unordered_map<TreeNode*, TreeNode*> parent;
        
        TreeNode* targetNode = markParents(root, target, parent);
        
        unordered_map<TreeNode*, bool> vis;
        
        queue<TreeNode*> q;
        q.push(targetNode);
        vis[targetNode] = true;
        
        int time = 0;
        
        while(!q.empty()) {
            
            int size = q.size();
            bool burned = false;
            
            for(int i = 0; i < size; i++) {
                
                TreeNode* node = q.front();
                q.pop();
                
                if(node->left && !vis[node->left]) {
                    vis[node->left] = true;
                    q.push(node->left);
                    burned = true;
                }
                
                if(node->right && !vis[node->right]) {
                    vis[node->right] = true;
                    q.push(node->right);
                    burned = true;
                }
                
                if(parent[node] && !vis[parent[node]]) {
                    vis[parent[node]] = true;
                    q.push(parent[node]);
                    burned = true;
                }
            }
            
            if(burned) time++;
        }
        
        return time;
    
    }
};