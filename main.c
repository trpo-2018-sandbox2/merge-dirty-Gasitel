#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int min_element(int *arr, int size)
{
    int min = *arr;

    int *it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it < min) {
            min = *it;
        }
    }

    return min;
}

void print_array(int *arr, int size)
{
    printf("Array: ");
    int i;
    for (i = 0; i < sizeof(arr)-1;++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(arr, N_ELEMENTS(arr));

<<<<<<< HEAD
    print_array(arr, N_ELEMENTS(arr));
=======
>>>>>>> master
    printf("Minimum element: %d\n", min);

    return 0;
}
