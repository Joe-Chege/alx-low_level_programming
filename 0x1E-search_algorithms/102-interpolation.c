/**
 * interpolation_search - Searches for a value in a sorted array
 *                        of integers using interpolation search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid;

    while (left <= right) {
        // Calculate the interpolated index
        mid = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));

        // Check if mid is within the valid range
        if (mid < size) {
            printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
        } else {
            printf("Value checked array[%ld] is out of range\n", mid);
            break;
        }

        // If the value is found, return the index
        if (array[mid] == value) {
            return mid;
        }

        // Adjust the search boundaries
        if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
