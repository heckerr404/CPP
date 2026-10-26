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
    TreeNode *prev=nullptr,*first=nullptr,*sec=nullptr;
    void inorder(TreeNode *root){
        if(root==nullptr){
            return;
        }
        inorder(root->left);
        if(prev!=nullptr && prev->val>root->val){
            if(first==nullptr){
            first=prev;
            }
            sec=root;
        }
        prev=root;

        inorder(root->right);

    }
    void recoverTree(TreeNode* root) {
        prev=first=sec=nullptr;

        inorder(root);
        swap(first->val,sec->val);

    }
};