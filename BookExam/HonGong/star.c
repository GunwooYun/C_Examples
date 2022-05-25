#include<stdio.h>

int main()
{
    for(int i=0; i<5; i++){
        for(int j = 0; j<i+1; j++)
            printf("*");
    for(int i=0; i<5; i++)
    {
        for(int j=5; j>0; j--)
        {
            if(j>i) printf("*");
        }
        printf("\n");
    }

    for(int i=0; i<5; i++)
    {
        for(int j = 5; j > 0; j--)
        {
            if(j>i+1) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}