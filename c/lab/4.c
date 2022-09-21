//Show how the following number are sorted using the bubble sort technique: 42, 28, 90.2, 56, 39, 87 (Program in c).
#include<stdio.h>
int main() {
    int temp,i,j,arr[]={42, 28, 90, 56, 39, 87};
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
     printf("Result\n");
    for(i=0;i<6;i++){
        printf("%i\t",arr[i]);
    }
}