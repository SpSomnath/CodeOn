#include<stdio.h>
#include<stdlib.h>
int main() {
    char grade;

    printf("Enter you grade\t");
    scanf("%c",&grade);

    switch (grade)
    {
        case 'A':
        printf("You did great\n");
        break;

        case 'B':
        printf("You did alright\n");
        break;

        case 'C':
        printf("You can do batter \n");
        break;

        case 'D':
        printf("You did poor\n");
        break;

        case 'E':
        printf("You are failed");
        break;

        default :
        printf("invalid grade");
    }
    printf("Thanks for entering your grade");
}