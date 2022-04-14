/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    if (l1 && !l2)
        return (l1);
    if (!l1 && l2)
        return (l2);
    struct ListNode *head = NULL;
    struct ListNode *new = NULL;
    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {  
            if (new)
                new->next = l1;
            new = l1;
            l1 = l1->next;
        }
        else
        {
            if (new)
                new->next = l2;
            new = l2;
            l2 = l2->next;
        }
        if (head == NULL)
            head = new;
    }
    if (l1)
        new->next = l1;
    if (l2)
        new->next = l2;
    return (head);
}