#include<stdio.h>

int main()
{
    int num;
    int isNotSosu = 0, newLine = 0;
    printf("2 �̻��� ������ �Է��ϼ��� : ");
    scanf("%d", &num);

    if(num < 2)
        return 0;

    for(int i = 2; i<=num; i++){
        for(int j = 2; j < i; j++){
            if(i % j == 0)
                isNotSosu = 1;
        }
        if(isNotSosu)
            isNotSosu = 0;
        else{
            printf("%d ", i);
            if(newLine % 5 == 4)
                printf("\n");
            newLine++;
        }
        
        
    }    
    return 0;
}