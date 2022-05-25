
/****************************
*** 2022.04.07 print sosu ***
**** author : GunwooYun *****
****************************/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int number, isNumSosu = 0;
    int* arr = NULL;
    printf("양수 입력 : ");
    scanf("%d", &number);

    arr = (int *)malloc(number*sizeof(int)-2);

    for(int i=2;i<number; i++){
        for(int j = 2; j < i; j++){
            if(i%j == 0)
                isNumSosu = 1;
        }
        if(isNumSosu){
            *(arr + i-2) = 88;
            isNumSosu = 0;
        }
        else
            *(arr + i-2) = i;
        
    }

    for(int i=0;i<number-2; i++){
        if(arr[i] == 88)
            printf("%5c", arr[i]);
        else
            printf("%5d", arr[i]);
        if((i%5) == 4)
            printf("\n"); 
    }

    return 0;
}