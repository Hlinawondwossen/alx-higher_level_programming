#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: the list in which cycle is checked
 * Return: 0 if no cycle and 1 otherwise
 */
int check_cycle(listint_t *list)
{
    listint_t *tortoise_ptr = list;
    listint_t *hare_ptr = list;

    if (!list)
        return 0;

    while (hare_ptr->next && hare_ptr->next->next)
    {
        tortoise_ptr = tortoise_ptr->next;
        hare_ptr = hare_ptr->next->next;

        if (tortoise_ptr == hare_ptr)
            return 1;
    }

    return 0;
}
