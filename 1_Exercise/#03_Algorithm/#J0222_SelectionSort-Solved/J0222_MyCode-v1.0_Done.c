//J0222 Selection sort 選擇排序法

#include <stdio.h>

#define SIZE 10

int main(void) {
    
    int array[SIZE] = {0};

    puts("Before: ");
    for (int i = 0; i < SIZE; i++) {
        array[i] = SIZE - i;
    }

    // Show
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    // Selection sort
    for (int i = 0; i < SIZE - 1; i++) {
        int min = i;
        for (int j = (i + 1); j < SIZE; j++) {
            if(array[min] > array[j]) {
                min = j;
            }
        }

        if(min != i) {
            //SWAP
            int tmp = array[min];
            array[min] = array[i];
            array[i] = tmp;
        }
    }

    // Show
    puts("\nAfter");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}