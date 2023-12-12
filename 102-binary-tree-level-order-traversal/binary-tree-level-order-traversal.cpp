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

    vector<vector<int>> ans;

    void levelOrderTraversal(TreeNode* root, vector<vector<int>> &ans) {
        
        if(root == NULL) return;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            vector<int> temp;
            int s = q.size();

            for(int i = 0; i<s; i++) {
                TreeNode* front = q.front();
                q.pop();

                if(front->left != NULL) {
                    q.push(front->left);
                }

                if(front->right != NULL) {
                    q.push(front->right);
                }

                temp.push_back(front->val);
            }
            
            ans.push_back(temp);
        }
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        levelOrderTraversal(root, ans);
        return ans;
    }
};