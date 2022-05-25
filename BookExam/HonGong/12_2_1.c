#include<stdio.h>
#include<string.h>

void swap(char* a, char* b)
{

}

int main()
{
    char words[3][20];
    char temp[20];
    char* first, second, third;
    printf("Enter three words : ");
    scanf("%s %s %s", words[0], words[1], words[2]);

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
    printf("%s\n", words[2]);

    if(words[0][0] > words[1][0]){
        strcpy(temp, words[0]);
        strcpy(words[0], words[1]);
        strcpy(words[1], temp);
    }
    if(words[1][0] > words[2][0]){
        strcpy(temp, words[1]);
        strcpy(words[1], words[2]);
        strcpy(words[2], temp);
    }
    if(words[0][0] > words[1][0]){
        strcpy(temp, words[0]);
        strcpy(words[0], words[1]);
        strcpy(words[1], temp);
    }
    

    printf("%s, %s, %s\n", words[0], words[1], words[2]);


    

    return 0;
}