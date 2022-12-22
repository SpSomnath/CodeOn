#include<stdio.h>
#include<string.h>

int main() {
    system("mode con cols=60 lines=22");
    
    char box[60][20];
    int i,j;
    
    printf("Start\n");
    // printf("%p",box[1][1]);
    //value for array 
    for(i = 0; i<20;i++){
        for(j = 0; j<60; j++){
            box[i][j]='-';
    }
    
    }
    //print the array 
    for(i = 0; i<20;i++){
        for(j = 0; j<60; j++){
            printf("%c",&box[i][j]);
         
    }
    printf("\n");
    }


    printf("End");
}