//WAP in c to check whether the given number is Armstrong number or not.
#include<stdio.h>
int main() {
    int n,t,i,r,sum=0;
    printf("Enter 3 digit number to check whether number is Armstrong or not: ");
    scanf("%i",&n);
    t=n;
    while(n>0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;


    }
    if(t==sum){
        printf("Entered number is Armstrong");
    }
    else{
        printf("Entered number is not Armstrong");
    }
}
