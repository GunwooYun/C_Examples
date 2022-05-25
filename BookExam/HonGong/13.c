#include<stdio.h>


int a, b;

void input_data(int* pa, int* pb)
{
    printf("두 정수 입력 : ");
    scanf("%d %d", pa, pb);
}

void swap_data(void)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void print_data(int a, int b)
{
    printf("두 정수 출력 : %d, %d\n", a, b);
}



int main()
{


    input_data(&a, &b);
    swap_data();
    print_data(a, b);
    return 0;
}