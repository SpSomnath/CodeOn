// WAP in c to multiply two given matrix.
//WAP in c to subtract 2 matrix of size n x n.
#include<stdio.h>
int main() {
    int i,j,arr1[3][3],arr2[3][3],mul[3][3],sum=0,k;
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
    
    for(i=0;i<3;i++){ //Multiplication 
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum+=arr1[i][k]*arr2[i][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    printf("Result\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i\t",mul[i][j]);
        }
        printf("\n");
    }
}