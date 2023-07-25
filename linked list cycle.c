bool hasCycle(struct ListNode *head) {
    if (NULL == head || NULL == head->next)
            return false;
    struct ListNode *tortoise = head;
    struct ListNode *rabbit = head->next;
    while (rabbit != tortoise)
    {
        if (NULL == rabbit || NULL == rabbit->next)
        {
            return false;
        }
        tortoise = tortoise->next;
        rabbit = rabbit->next->next;
    } 
    return true;
}