#include<stdio.h>

int main(void)
{

    char ch;
    int max = 0;
    int length = 0;

    // while(1){
    //     scanf("%c", &ch);
    //     if(ch =='\n') break;
    // }
    while(1)
    {
        
        ch = getchar();

        if(ch == -1) break;
        //printf("%c", ch);
        if(ch == 10){
            //printf("length : %d\n", length);
            if(length > max)
                max = length;
            length = 0;
        }
        else
            length++;
        
        
    }
    printf("가장 긴 단어의 길이 : %d", max);
   // printf("max : %d\n", max);
    // ch = getchar();
    // printf("%c", ch);
    // ch = getchar();
    // printf("%c", ch);
    // printf("%c", ch);
    // printf("%c", ch);


    //scanf("%s", word);
    //printf("%s\n", word);
    //char word[100];

    //gets(word);
    //puts(word);
    return 0;
}