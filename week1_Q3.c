#include <stdio.h>
int main(){
    float radius,diameter,circumference,area;
    printf("Enter radius of circle : ");
    scanf("%f" ,&radius);

    diameter= 2*radius;
    circumference = 2*3.14 *radius;
    area = 3.14 *(radius * radius);
    printf("DIAMETER = %.2f units \n" ,diameter);
    printf("CIRCUMFERENCE = %.2f units \n" ,circumference);
    printf("AREA = %.2f sq. units", area);
    return 0;
}