#include <stdio.h>
void swap(int* num1,int* num2);
int main() { 
    int temp,i,j,a[5]={2,4,3,1,5};
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[j]<a[j+1]){
                int 