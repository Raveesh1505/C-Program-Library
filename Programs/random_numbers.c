#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    printf("Printing 5 random numbers: \n");
    for (i = 0; i < 5; i++){
        for (j = 1; j < 5; j++){
            printf("%d", rand());
        }
        printf("\n");
    }
    return 0;
}