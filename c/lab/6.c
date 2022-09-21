// WAP to find the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,d,x1,x2;
    printf("Enter the vlaue of a,b,c\n");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (d<0){
        printf("It is a Imaginary root\n");
    }
    else if (d=0){
        printf("x=0");
    }
    else{
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        printf("x1=%f \t x2=%f",x1,x2);
    }
}