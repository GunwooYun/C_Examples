#include<stdio.h>

int main()
{
    char reqCal;
    int num1, num2, result;

    printf("사칙연산 입력(정수) : ");
    scanf("%d%c%d", &num1, &reqCal, &num2);

    switch(reqCal){
        case '+' :
            result = num1 + num2;
            break;
        default :
            break;
    }

    printf("%d %c %d = %d\n", num1, reqCal, num2, result);
    
    return 0;
}