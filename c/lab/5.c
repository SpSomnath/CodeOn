//WAP to find factorial of a given no. using recursion function.
#include<stdio.h>
int fact(int n);
int main() {
    int n, result;
    printf("Enter the number to find factorial: ");
    scanf("%i",&n);
    result=fact(n);
    printf("The factorial of %i is : %i ",n,result);
}

int fact(int n) {
    int result;
    if (n==0){
        return 1;
    }
    else{
        result =n*fact(n-1);
        return result;
    }
}

