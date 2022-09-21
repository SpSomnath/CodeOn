//WAP to generate prime number between 1 to n.
#include<stdio.h>
int main() {
    int i,n,prime;
    printf("Enter any number to print prime number:\t");
    scanf("%i",&n);
    if(n==1||n==0){
        printf("Enter the valid number\n");
    }
    for(i=1;i<=n;i++){
        prime=i;
        if(prime%2==0){
               printf("%i\t",prime);
        }
     
    }
}