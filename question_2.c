#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q2)Write a C program to compute the area and circumference of a circle for a given radius, r. Here radius,
r have to be taken form the user. */
    float pi = 3.141592;
    float r, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    circumference = 2*pi*r;
    area = pi*r*r;
    printf("Circumference of the circle: %.3f\nArea of the circle: %.3f\n", circumference, area);
	return 0;
}
