#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list.
 * Return: number of elements in a linked list_t list.
 **/
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        count++;
        h = h->next;
    }
    return (count);
}
