#include <stdio.h>
#include <string.h>

char * _strcat(char * str1, char * str2){
  int i = 0;
  int j = 0;
  char * ptr = NULL;
  char * ptr2 = NULL;
  while(1){
    if(*(str1 + i) == '\0'){
      ptr = str1 + i;
      break;
    }
    i++;
  }
  while(1){
    if(*(str2 +j) == '\0'){
      ptr = str2 + j;
      ptr = NULL;
      break;
    }
    *(ptr + j) = *(str2 + j);
    j++;
  }
  return str1;
}

int main(void) {
  char fruit[80] = "straw";
  //printf("%s\n", fruit);
  printf("%s\n", _strcat(fruit, "berry"));
  return 0;
}
