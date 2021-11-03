#include <stdio.h>
#include <math.h>

float volume_cube(side){
    float volume;

    volume = pow(side, 3);

    printf("The volume of your cube is = %f", volume);
    return 0;
}

float volume_sphere(radius){
    float volume, v_temp, pi = 22/7;

    v_temp = pow(radius, 3);

    volume = (pi * 4 * v_temp)/3;

    printf("The volume of your sphere is = %f", volume);
    return 0;
}

int main(){
    int choice; float radius, side;

    // Taking user input for the shape

    printf("Enter 1 for volume of cube\nEnter 2 for volume of sphere\n");
    scanf("%d", &choice);

    // Taking user input for shape dimensions and calulating area

    if (choice == 1){
        printf("Enter the side of cube: ");
        scanf("%f", &side);
        volume_cube(side);
    }
    else if (choice == 2){
        printf("Enter the radius of sphere: ");
        scanf("%f", &radius);
        volume_sphere(radius);
    }
    else{
        printf("Invalid input.");
    }
    return 0;
}