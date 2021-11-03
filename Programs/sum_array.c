#include <stdio.h>

int main(){
    int e, a[100], b[100], sum[100], i, j;

    // Taking user input

    printf("Enter the number of elements in your array: ");
    scanf("%d", &e);

    // Setting up array

    printf("Enter the elements of first array\n");
    for (i=0; i<e; i++){
        printf("Enter element %d:", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter elements of second array\n");
    for (i=0; i<e; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &b[i]);
    }

    // Adding

    for (i=0; i<e; i++){
        sum[i] = a[i]+b[i];
    }

    // Printing the sum

    for (i=0; i<e; i++){
        printf("%d ", sum[i]);
    }
    return 0;
}