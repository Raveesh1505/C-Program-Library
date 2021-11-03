#include <stdio.h>
#include <math.h>

// Function to find area of a circle

float area_circle(radius){

    float pi = 22/7;

    float r_sq = pow(radius, 2);
    float area = pi * r_sq;

    printf("Area of the circle is = %f", area);
    return 0;
}

// Function to find area of a rectangle

float area_rectangle(length, breadth){
    float area;

    area = length * breadth;

    printf("The area of your rectangle is = %f", area);
    return 0;
}

// Function to find area of square

float area_square(side){
    float area;

    area = pow(side, 2);

    printf("The area of your square is = %f", area);
    return 0;
}

// Function to calculate area of a triangle

float area_triangle(base, height){
    float area;

    area = (base * height)/2;

    printf("The ares of your triangle is = %f", area);
    return 0;
}

// Function to calculate area of a cylinder

float area_cylinder(radius, height){
    float rad_sq, area, pi = 22/7;

    rad_sq = pow(radius, 2);

    area = (2 * pi * radius * height) + (2 * pi * rad_sq);

    printf("The area of your cylinder is = %f", area);
    return 0;
}

int main(){
    int choice; float length, breadth, side, height, radius, base;

    // Taking user input for the shape

    printf("Enter 1 to find area of square\nEnter 2 to find area of circle\nEnter 3 to find area of rectangle\nEnter 4 to find area of triangle\nEnter 5 to find area of cylinder\nYour input: ");
    scanf("%d", &choice);

    // Taking user inputs and calculating area os per choice

    if (choice == 1){
        printf("Enter the side length of square: ");
        scanf("%f", &side);
        area_square(side);
    }
    else if (choice == 2){
        printf("Enter the radius of circle: ");
        scanf("%f", &radius);
        area_circle(radius);
    }
    else if (choice == 3){
        printf("Enter the length of rectangle: ");
        scanf("%f", &length);
        printf("Enter the breadth of rectangle: ");
        scanf("%f", &breadth);
        area_rectangle(length, breadth);
    }
    else if (choice == 4){
        printf("Enter the height of triangle: ");
        scanf("%f", &height);
        printf("Enter the base of triangle: ");
        scanf("%f", &base);
        area_triangle(base, height);
    }
    else if (choice == 5){
        printf("Enter the radius of cylinder: ");
        scanf("%f", &radius);
        printf("Enter the height of cylinder: ");
        scanf("%f", &height);
        area_cylinder(radius, height);
    }
    else{
        printf("Invalid input.");
    }
    return 0;
}