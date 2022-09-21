//WAP in c to check whether the given year is leap year or not.
#include<stdio.h>
int main() {
    int year;
    printf("Enter the year to check leep year or not: ");
    scanf("%i",&year);
    if(year%4==0){
        printf("Leep year");
    }
    else{
        printf("Not a Leep year");
    }
}