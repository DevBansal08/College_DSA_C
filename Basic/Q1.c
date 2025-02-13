#include <stdio.h>

int main() {
    
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    

    
    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    return 0;
}

