#include<stdio.h>

int main()
{
    char word[30];
    printf("Enter word : ");
    scanf("%s", word);

    printf(" 입력한 단어 : %s\t", word);
    int index = 0, cnt = 0;
    while(1){

        if(*(word+index) == '\0')
            break;
        if(index>4)
            *(word+index) = '*';
        index++;


    }
    //printf("length : %d\n", index);
    printf(" 생략한 단어 : %s\n", word);

    return 0;
}