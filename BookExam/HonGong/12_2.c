#include<stdio.h>

int main()
{
    char word[30];
    printf("Enter word : ");
    scanf("%s", word);

    printf(" �Է��� �ܾ� : %s\t", word);
    int index = 0, cnt = 0;
    while(1){

        if(*(word+index) == '\0')
            break;
        if(index>4)
            *(word+index) = '*';
        index++;


    }
    //printf("length : %d\n", index);
    printf(" ������ �ܾ� : %s\n", word);

    return 0;
}