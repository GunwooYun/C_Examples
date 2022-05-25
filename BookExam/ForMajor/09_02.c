#include<stdio.h>
#define MAX 20

int main()
{
    int decimal, rest, index=0;
    int j = 0;
    int binary[MAX]={0};

    puts("Enter decimal number to be binary");
    scanf("%d", &decimal);
    printf("decimal : %d\n", decimal);

    while(1){
        if(decimal == 0)
            break;
        else{
            binary[index++] = decimal % 2;
            decimal /= 2;
        }
    }
    printf("index : %d\n", index);
    for(int i = MAX-1; i >= 0; i--){
        printf("%d", binary[i]);
        j++;
        if(j%4 == 0)
            printf(" ");
    }
    return 0;
    



}