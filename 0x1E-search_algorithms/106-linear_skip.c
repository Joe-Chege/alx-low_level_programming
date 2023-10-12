#include "search_algos.h"

/**
 * linear_search - Performs linear search within a specified range of the list.
 */
skiplist_t *linear_search(skiplist_t *start, skiplist_t *end, int value)
{
    skiplist_t *node;

    for (node = start; node != NULL && node != end->next; node = node->next)
    {
        printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
        if (node->n == value)
            return node;
    }

    return NULL;
}

/**
 * linear_skip - Searches for a value in a sorted singly linked list
 *               of integers using linear skip.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *jumpNode;

    if (list == NULL)
        return NULL;

    current = list;
    jumpNode = list->express ? list->express : list;

    while (jumpNode != NULL && jumpNode->n < value)
    {
        printf("Value checked at index [%ld] = [%d]\n", jumpNode->index, jumpNode->n);
        current = jumpNode;
        jumpNode = jumpNode->express ? jumpNode->express : jumpNode->next;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", current->index, jumpNode ? jumpNode->index : 0);
    return linear_search(current, jumpNode, value);
}
