#include <stdio.h>

char std_grade(marks){
    
    if (marks > 90){
        printf("Grade: A+");
    }
    else if (80 < marks && marks <= 90){
        printf("Grade: A");
    }
    else if (70 < marks && marks <= 80){
        printf("Grade: B");
    }
    else if (50 < marks && marks <= 70){
        printf("Grade: C");
    }
    else if (marks <= 50){
        printf("Grade: D");
    }
    return 0;
}

int main(){
    float marks;

    // Taking user input

    printf("Enter student marks: ");
    scanf("%f", &marks);

    // Printing the grades

    std_grade(marks);
    return 0;
}