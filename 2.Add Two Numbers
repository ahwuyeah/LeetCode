/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *curr, *root, *node;
    curr = (struct ListNode*)malloc(sizeof(struct ListNode));
    root = curr;
    int tmp, tmp1, tmp2, carry = 0;
    while(l1 || l2){
        tmp1 = l1? l1 -> val : 0;
        tmp2 = l2? l2 -> val : 0;
        tmp = tmp1 + tmp2 + carry;
        
        if(tmp > 9){
            tmp = (tmp % 10);
            carry = 1;
        }
        else{
            carry = 0;
        }
        //node必須在wile迴圈裡取得新空間存tmp
        node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node -> val = tmp;
        curr -> next = node;
        curr = curr -> next;
        
        //l1還有
        if(l1) l1 = l1 -> next;
        //l2還有
        if(l2) l2 = l2 -> next;
    }
    //如果carry還有，但l1&l2沒了
    if(carry == 1){
        node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node -> val = 1;
        node -> next = NULL;
        curr -> next = node;
    }
    
    node -> next = NULL;
    curr = root -> next;
    free(root);
    return curr;
    
}
