#include<stdio.h>

int main()
{
    int arr[5][6]={0};
    int num = 1;
    int sum = 0;
    
    for(int i = 0; i < 4; i++){
            for(int j = 0; j < 5; j++){
                arr[i][j] = num;
                num++;
            }
    }
    for(int i = 0; i < 4; i++){
            for(int j = 0; j < 5; j++){
                printf("%d ", arr[i][j]);
                
            }
    }

    for(int i=0; i<4;i++)
    {
        for(int j=0; j<4; j++)
        {
            for(int k=0; k<5; k++)
            {
                arr[i][5] = arr[i][5] + arr[j][k];
            }
        }
    }

    for(int i=0; i<5;i++)
    {
        for(int j=0; j<5; j++)
        {
            for(int k=0; k<4; k++)
            {
                arr[4][i] = arr[4][i] + arr[k][j];
            }
        }
    }

    sum = arr[3][5] + arr[4][4];
    printf("sum : %d\n", sum);

}