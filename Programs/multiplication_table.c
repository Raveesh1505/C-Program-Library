#include <stdio.h>

int table(num, range){
    int i, j, mult;

    // Making the table

    for (i=1; i <= range; i++){
        mult = num * i;
        printf("%d x %d = %d", num, i, mult);
        printf("\n");
    }
    return 0;
}

int main(){
    int num, range;

    // Taking user input

    printf("Enter the number for which you want to print the table: ");
    scanf("%d", &num);
    printf("Enter the range till where you want to print the table: ");
    scanf("%d", &range);

    // Printing the table

    table(num, range);
    return 0;
}