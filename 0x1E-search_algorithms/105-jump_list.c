#include "search_algos.h"

/**
 * find_jump_step - Calculates the optimal jump step for the list size.
 */
size_t find_jump_step(size_t size)
{
    return sqrt(size);
}

/**
 * linear_search - Performs linear search within the specified range of the list.
 */
listint_t *linear_search(listint_t *start, size_t end, int value)
{
    listint_t *node;

    for (node = start; node != NULL && node->index <= end; node = node->next)
    {
        printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
        if (node->n == value)
            return node;
    }

    return NULL;
}

/**
 * jump_list - Searches for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = find_jump_step(size);
    listint_t *current, *jumpNode;

    if (list == NULL || size == 0)
        return NULL;

    for (current = list, jumpNode = list; jumpNode->index < size - 1 && jumpNode->n < value;)
    {
        current = jumpNode;
        jumpNode = jumpNode->next;

        if (jumpNode->index + 1 >= size || jumpNode->n >= value)
            break;
        
        for (size_t i = 0; i < step && jumpNode->next != NULL; i++)
            jumpNode = jumpNode->next;
        
        printf("Value checked at index [%ld] = [%d]\n", jumpNode->index, jumpNode->n);
    }

    printf("Value found between indexes [%ld] and [%ld]\n", current->index, jumpNode->index);
    return linear_search(current, jumpNode->index, value);
}
