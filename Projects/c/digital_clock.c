#include<stdio.h>
#include<windows.h>
int main() {
    int h,m,s;
    int d=1000;  //we add a delay of 1000 millisecond and we will use it in the funcction sleep
    printf("Set time: hr: mint:sec:\n");
    scanf("%i%i%i",&h,&m,&s);
    if (h>12 ||m>60 ||s>60){
        printf("Error !");
        exit(0);
    }
    while(1)//this is an infine loop and anything inside will repeat itself to infinitely 
    {
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if (m>59){
            h++;
            m=0;
        }
        if (h>12){
            h=1;
        }
        printf("\n Clock :");
        printf("\n %02i:%02i:%02i",h,m,s); //this write our time in this format 00:00:00
        Sleep(d); //this function sleeps slows down the while loop and make it more like real clouch
        system("cls");
    }

}