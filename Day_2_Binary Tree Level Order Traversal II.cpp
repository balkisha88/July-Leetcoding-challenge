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


    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> result;
         queue<TreeNode *> res;
        if (root==NULL)
            return result;
        
        res.push(root);
        
        while(!res.empty())
        {
            
            int size=res.size();
            vector<int> node;
            for(int i=0;i<size;i++)
            {
                TreeNode* n=res.front();
                res.pop();
                node.push_back(n->val);
                if(n->left) res.push(n->left);
                if(n->right) res.push(n->right);
                
            }
            result.push_back({node});
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
