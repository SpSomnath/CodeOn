//WAP in c to subtract 2 matrix of size n x n.
#include<stdio.h>
int main() {
    int i,j,arr1[3][3],arr2[3][3],sub[3][3];
    printf("Enter the element of first matrix(3x3)\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%i",&arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix(3x3)\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%i",&arr2[i][j]);
        }
    }
    for(i=0;i<3;i++){ //subtraction 
        for(j=0;j<3;j++){
            sub[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    printf("Result\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i\t",sub[i][j]);
        }
        printf("\n");
    }
}