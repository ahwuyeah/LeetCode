struct ListNode* oddEvenList(struct ListNode* head){
    //可能有"空"鏈
    if(!head) return head;
    
    struct ListNode *odd, *even, *final;
    odd = head;
    even = head -> next;
    final = even;
    while (even && even -> next)
    {   
        odd -> next = even -> next;
        odd = odd -> next;
        even -> next = odd -> next;
        even = even -> next;

    }
    odd -> next = final;
    return head;
}
