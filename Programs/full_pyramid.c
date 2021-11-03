#include <stdio.h>

int main(){
    int rows, i, j, k;

    // Taking user input

    printf("Enter the number of rows you want to print: ");
    scanf("%d", &rows);

    // Printing the pyramid
    for (i=1; i<=rows; i++){
        for (j=1; j<=rows-i; j++){
            printf(" ");
        }
        for (k=1; k<=(2*i - 1); k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}