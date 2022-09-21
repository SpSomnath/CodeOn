//WAP in c to calculate the area of triangle.
#include<stdio.h>
int main(){
    int h,b,area;
    printf("Enter the value of height and base: ");
    scanf("%i %i",&h,&b);
    area=(h*b)/2;
    printf("Area of triangle is: %i",area);
}