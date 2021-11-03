#include <stdio.h>

int fib(range){
    int i, n1 = 0, n2 =1, n3;
    
    // Printing 0 and 1
    
    printf("\n%d\n%d", n1, n2);

    for (i=1; i <= (range-2) ; i++){
        n3 = n1+n2;
        printf("\n%d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}

int main(){
    int range;

    // Taking user input

    printf("Enter the range till which you want to see the series: ");
    scanf("%d", &range);

    // Printing the series

    fib(range);
    return 0;
}