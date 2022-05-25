#include<stdio.h>

int main(void){

    char str1[100];
    char str2[100];
    int i = 0, j = 0;

    puts("Enter the first string");
    gets(str1);
    puts("Enter the second string");
    gets(str2);

    while(1)
    {
        if(str1[i] == '\0')
            break;
        //printf("%c", str1[i++]);
        while(1){
            
        }
        i++;
    }


    //printf("\n\n");
    //printf("%s\n", str1);
    //printf("%s\n", str2);

    return 0;
}