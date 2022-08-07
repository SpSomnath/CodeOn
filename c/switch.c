
#include<stdio.h>
#include<stdlib.h>
void main() 
{
    double num1;
    double num2;
    char op;
        
    puts("Enter your first no. :   ");
    scanf("%lf", &num1);
    puts("Enter your second no. :   ");
    scanf("%lf", &num2);
      printf("enter your operator ");
    scanf("%c", &op);

    
    switch (op)
        {
        case '+' :
                printf("Your added value is %f",num1+num2);
                break;
        case '-' :
                printf("Your added value is %f",num1-num2);
                break;
        case '*' :
                printf("Your added value is %f",num1*num2);
                break;
        case '/' :
                printf("Your added value is %f",num1/num2);
                break;
        default: 
                printf("invalid operator");

                break;
        }
}