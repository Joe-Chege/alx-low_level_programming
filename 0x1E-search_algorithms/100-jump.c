#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 *               of integers using jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 *              Uses the square root of the array size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t left = 0;
    size_t right = 0;

    if (array == NULL || size == 0)
        return -1;

    while (right < size && array[right] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", right, array[right]);
        left = right;
        right += step;
    }

    right = right < size ? right : size;

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    for (; left < right && array[left] < value; left++)
    {
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);
    }

    if (array[left] == value)
    {
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);
        return (int)left;
    }

    return -1;
}
