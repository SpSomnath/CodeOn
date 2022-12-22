#include<stdio.h>
int main() {
    // #define ROWS 10
    // #define COLS 20
    char array[3][3]={'a','b','c',
                    'd','e','f',
                    'g','h','i'};

    // array[10][20]='2';
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%20c",&array[i][j]);
        }
        printf("\n");
    }
    
}