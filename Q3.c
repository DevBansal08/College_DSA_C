#include <stdio.h>

void deleteSecondElement(int arr[], int *size) {
    if (*size < 2) {
        printf("Array does not have a second element to delete.\n");
        return;
    }

    for (int i = 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    (*size)--;
}

int main() {
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Invalid size. Must be between 1 and 100.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteSecondElement(arr, &size);

    printf("Array after deleting the second element: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
