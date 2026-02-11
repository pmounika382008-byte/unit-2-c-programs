//Program to Sort an Array Using Bubble Sort
#include <stdio.h>
int main() {
    int arr[] = {50, 11, 10, 9, 45};
    int n = 5; 
    int i, j, temp;
    
    printf("Array before sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++) {
        
        for (j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j+1]) {
               
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
     printf("Array after sorting (Bubble Sort):\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;

}
output:Array before sorting:
50	11	10	9	45	
Array after sorting (Bubble Sort):
9	10	11	45	50
