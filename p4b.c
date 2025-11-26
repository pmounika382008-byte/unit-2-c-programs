// C Program to Access Array Elements Using Pointer
#include<stdio.h>
int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers; 

    printf("Accessing elements using pointers:\n");
    printf("First element: %d\n", *ptr); 
    printf("Second element: %d\n", *(ptr + 1)); 
    printf("All elements using a loop:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 35; 
    printf("Modified third element: %d\n", numbers[2]);
    return 0;
}