//J0221 Bubble sort 冒泡排序法

#include <stdio.h>

#define SIZE 10

int main(void) {

    int array[SIZE] = {0};

    puts("Before: ");
    for (int i = 0; i < SIZE; i++) {
        array[i] = SIZE - i;
    }
    
    //Show
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    //Bubble sort
    puts("\nAfter: ");
    for (int i = 0; i < SIZE-1; i++) {
        for (int j = 0; j < SIZE-1-i; j++) {

            // > 由小到大排序
            // < 由大到小排序
            if (array[j] > array[j+1]) {
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }

    //Show
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}