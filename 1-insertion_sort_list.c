#include "sort.h"

/**
 * Swap - swaps two doubly linked list nodes
 * @head: pointer to head of linked list
 * @A: the first node
 * @B: the second node
 */
void Swap(listint_t *A, listint_t *B, listint_t **head)
{
listint_t *tmp1 = NULL, *tmp2 = NULL;
if (A == NULL || B == NULL)
return;
tmp1 = A->prev;
tmp2 = B->next;

if (tmp1)
tmp1->next = B;
if (tmp2)
tmp2->prev = A;

A->next = tmp2;
A->prev = B;
B->next = A;
B->prev = tmp1;
if (tmp1 == NULL)
*head = B;
}

/**
 * insertion_sort_list - sorts in ascending order using insertion sort
 * @list: pointer to doubly linked list node
 * Only swapping is allowed
 */
void insertion_sort_list(listint_t **list)
{
listint_t *curr = *list, *next = *list;
if (list == NULL || (*list)->next == NULL || (*list) == NULL)
return;

while (next)
{
curr = next->prev;
while (curr && (curr->n > next->n))
{
Swap(curr, next, list);
print_list(*list);
curr = next->prev;
}
next = next->next;
}
}
