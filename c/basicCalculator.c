#include<stdio.h> //building a basic calculator to add subtract and multiply  of two values
int main() {
 int num1;
 int num2;
 char op;

 printf("Enter your first no. :\t");
 scanf("%i",&num1);

 printf("Enter your second no. :\t");
 scanf("%i",&num2);

  printf("Enter operator: ");
    scanf(" %c", &op);
    if (op == '+'){
        printf("your answer is %i", num1 + num2);
    }else if (op == '-'){
        printf("%i", num1 - num2);
    }else if (op == '*'){
        printf("%i", num1 * num2);
    }else if (op == '/'){
        printf("%i", num1 / num2);
    }else{
        printf("Invalid operator\n");
    }

}