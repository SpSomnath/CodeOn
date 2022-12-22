#include<stdio.h>
#include<stdlib.h>
int main() {
    int score=0;
    char a[]="hello";
    printf("Score = %i",score);
    for (int i=1;i<=5;i++){
        for(int j=0;j<=i;j++){
            printf("\n");           
        }
        printf("hello");
        _sleep(1000);
        system("cls");
        score=score+1; 
        printf("Score = %i",score);
    }
}
