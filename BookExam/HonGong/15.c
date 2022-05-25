#include<stdio.h>
#include<string.h>
#define INT 1
#define DOUBLE 2

void swap(const char* type, void* a, void* b)
{
    int mode, tempi;
    double tempd;
    if(!(strcmp(type, "int")))
        mode = 1;
    else if(!(strcmp(type, "double")))
        mode = 2;
    else
        mode = 0;
    
    switch(mode){
        case INT :
            tempi = *(int *)a;
            *(int *)a = *(int *)b;
            *(int *)b = tempi;
            break;
        
        case DOUBLE :
            tempd = *(double *)a;
            *(double *)a = *(double *)b;
            *(double *)b = tempd;
            break;
        default :
            break;        

    }

    
}

int main()
{

    int age1 = 0, age2 = 0;
    double height1 = 0, height2 = 0;

    printf("첫 번째 사람의 나이와 키 입력 : ");
    scanf("%d %lf", &age1, &height1);

    printf("두 번째 사람의 나이와 키 입력 : ");
    scanf("%d %lf", &age2, &height2);

    printf("<< 변경 전 >>\n");
    printf("첫 번째 사람 나이와 키 : %d, %.1lf\n", age1, height1);
    printf("두 번째 사람 나이와 키 : %d, %.1lf\n", age2, height2);

    swap("int", &age1, &age2);
    swap("double", &height1, &height2);

    printf("<< 변경 후 >>\n");
    printf("첫 번째 사람 나이와 키 : %d, %.1lf\n", age1, height1);
    printf("두 번째 사람 나이와 키 : %d, %.1lf\n", age2, height2);

    return 0;
}