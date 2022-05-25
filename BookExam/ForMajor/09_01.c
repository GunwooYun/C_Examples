#include<stdio.h>
#include<string.h>

int main()
{
    int num[5]={0};
    int max, min;
    int size = 0;
    printf("Enter five integers seperated by blanks.\n");
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

    max = num[0];
    min = num[0];

    size = sizeof(num) / sizeof(num[0]);
    printf("size : %d\n", size);

    for(int i = 1; i < size; i++){
        if(num[i] > max)
            max = num[i];
        if(num[i] < min)
            min = num[i];
    }
    printf("min is %d. max is %d\n", min, max);

    return 0;
    
}