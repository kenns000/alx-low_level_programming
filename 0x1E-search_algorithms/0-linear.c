#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array
  *                 of integers using linear search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; ++i) {
        printf("Comparing with array[%zu] = %d\n", i, array[i]);
        if (array[i] == value) {
            return i;  // Return the index where the value is found
        }
    }

    return -1;  // Return -1 if value is not found in the array
}

int main() {
    int arr[] = { 3, 6, 8, 12, 4, 9 };
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int value = 4;
    int index = linear_search(arr, size, value);

    if (index != -1) {
        printf("Value %d found at index %d\n", value, index);
    } else {
        printf("Value %d not found in the array\n", value);
    }

    return 0;
}
