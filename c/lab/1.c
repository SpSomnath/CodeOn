// Wap in c to find the largest element in given array of elements

#include<stdio.h>
int main() {
    int i, lar, arr[]={10, 20, 15, 2, 5, 4, 8, 100, 1000, 9};
    lar=arr[0];
    for(i=0;i<9;i++){
        if(lar<=arr[i+1]){
            lar=arr[i+1];
        }
    }
    printf("The largest number in array is %i",lar);
}

