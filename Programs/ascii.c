#include <stdio.h>

int main(){
    char input_val;

    // Taking user input

    printf("Enter the character/number: ");
    scanf("%c", &input_val);

    // Printing the ASCII value

    printf("ASCII value of %c is %d", input_val, input_val);
    return 0;
}