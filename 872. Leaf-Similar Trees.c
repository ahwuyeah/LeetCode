/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


void traversal(struct TreeNode* root, int *num, int *leaf)
{
    if(!root) return;
    if(!root -> left && !root -> right)
        leaf[(*num)++] = root -> val;
    traversal(root -> left, num, leaf);
    traversal(root -> right, num, leaf);
}

bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2){
    int *leaf1 = (int *)malloc(100*sizeof(int)), *leaf2 =(int *)malloc(100*sizeof(int));
    int level_1 = 0, level_2 = 0;
    bool result = false;
    traversal(root1, &level_1, leaf1);
    traversal(root2, &level_2, leaf2);
    result = level_1 == level_2 ? true : false;
    for(int i = 0; i < level_1; i++)
       if(leaf1[i] != leaf2[i]) result = false;
    return result;
}
