/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int traversal(struct TreeNode* root, int L, int R){
    int sum = 0;
    struct TreeNode *curr, *ptr;
    curr = root;
    while(curr != NULL){
        //先走完左邊
        if(curr -> left !=NULL){
            ptr = curr -> left;
            while((ptr -> right != NULL) && (ptr -> right != curr)){
                ptr = ptr -> right;
            }
            if(ptr -> right == NULL){
                ptr -> right = curr;
                curr = curr -> left;
            }
            else 
            {
                if(curr -> val >= L && curr -> val <= R) sum += curr -> val;
                ptr -> right = NULL;
                curr = curr -> right;
            }
        }
        else
        {
            if(curr -> val >= L && curr -> val <= R) sum += curr -> val;
            curr = curr -> right;
        }
    }
    return sum;
}



int rangeSumBST(struct TreeNode* root, int low, int high){
    if(root == NULL) return 0;
    return traversal(root, low, high);
}
