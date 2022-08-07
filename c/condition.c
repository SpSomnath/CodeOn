/*
 WAP to get 2 no. and check the condition which on is greater 

*/

#include<stdint.h>
int main() {
    int num1;
    int num2;
    printf("Enter your first no. : ");
    scanf("%d",&num1);
    printf("Enter your Second no. : ");
    scanf("%d",&num2);
    if(num1>num2){                                          //condition check 
        printf("first no. is greater than second no ");
    }
    else if(num2>num1){
        printf("Second no. is greater than first no.");
    }
    else {
        printf("Entered no. is equal ");
    }
    
}